#include <GL/freeglut.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "classes/player.cpp"
#include "classes/balaPlayer.cpp"
#include "classes/inimigo.cpp"
#include "classes/balaInimigo.cpp"
#include "classes/menu.cpp"

//Instanciações de objetos de classe
Menu menu;

Player player;
BalaPlayer balaPlayer;

Inimigo inimigo[15];
BalaInimigo balaInimigo;

//Escopo de funções estão sendo obrigatórios aqui
void inicializaObjetos(void);
void desenha(void);
void tecladoEspecial(int tecla, int x, int y);
void tecladoAscii(unsigned char tecla, int x, int y);
void tempoDeInicio(int value);
void animaInimigoX(int value);
void animaInimigoY(int novoTempo);
void animaTiroInimigo(int value);
void animaTiroPlayer(int value);

//Variáveis Globais
bool trocarDirecao = false;
int tempo=0;
bool contarTempo = false;

// Menu
bool menuAtivado=true;
bool jogoAtivado = false;
bool possoContarTempoDeInicio = false;
float tempoInimigoX=1000;//1000 = 1 segundo
float tempoInimigoY=1000; //1000 = 1 segundo
float tempoTiroInimigo=33; // 33 = 0.033 segundos deltaTime
float tempoTiroPlayer=33; // 33 = 0.033 segundos deltaTime
int tempoInicio=1000;
int contTempoPraComecar=0;


//Função Main é onde tudo acontece de fato
int main(int argc, char** argv){

  glutInit(&argc,argv);
  glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
  glutInitWindowPosition(240,0);
  glutInitWindowSize(480,640);
  glutCreateWindow("Jogo Opengl");

  inicializaObjetos();
  glutDisplayFunc(desenha);
  glutSpecialFunc(tecladoEspecial);
  glutKeyboardFunc(tecladoAscii);
  glutTimerFunc(tempoInicio,tempoDeInicio,1);
  glutTimerFunc(tempoInimigoX,animaInimigoX,1);
  glutTimerFunc(tempoInimigoY,animaInimigoY,1);
  glutTimerFunc(tempoTiroInimigo,animaTiroInimigo,1);
  glutTimerFunc(tempoTiroPlayer,animaTiroPlayer,1);
  glutMainLoop();

}

//Aqui iniciamos o objeto quando iniciamos o jogo
void inicializaObjetos()
{
  glClearColor(0,0,0,0);

  player.start();
  balaPlayer.inicializa();
  balaPlayer.setPosicaoX(player.getMoverX());
  balaPlayer.setPosicaoY(player.getPosicaoY());

  inimigo[0].inicializa();
  balaInimigo.inicializa();
  balaInimigo.setPosicaoX(inimigo[0].getMoverX());
  balaInimigo.setPosicaoY(inimigo[0].getPosicaoY());

}

//Função que desenha na tela
void desenha()
{
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  glOrtho(-100,100,-100,100,-1,1);
  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();

  if(menuAtivado==true)
  {
     glClearColor(1,1,1,1);
     contTempoPraComecar = 0;
     menu.menuPrincipal();
  }

  if(menuAtivado==false)
  {
      glClearColor(0,0,0,0);
      if(contTempoPraComecar >= 5)
     {
       balaPlayer.setPosicaoY(player.getPosicaoY());
       player.criarPlayer();
       balaPlayer.criarBala();

       balaInimigo.setPosicaoY(inimigo[0].getPosicaoY());
       inimigo[0].criarInimigo();
       balaInimigo.criarBala();
     }
  }

  glutSwapBuffers();

}


//Função para pegar teclas como (PageUp,Insert,Setas do teclados, F1...F12).
void tecladoEspecial(int tecla, int x, int y)
{
  if(tecla == GLUT_KEY_LEFT)
  {
    if(player.getMoverX() > -90)
      player.setMoverX(-5);
  }
  if(tecla == GLUT_KEY_RIGHT)
  {
    if(player.getMoverX() < 90)
      player.setMoverX(5);
  }
  glutPostRedisplay();
}

//Função para pegar teclas como ('a','A','d','D','Esc')-> Que estão na tabela Ascii -> (97,65,100,68,27)
void tecladoAscii(unsigned char tecla, int x, int y)
{
  switch(tecla)
  {
    case 27: exit(0);break;
    case '1': menuAtivado = !menuAtivado; 
              possoContarTempoDeInicio = !possoContarTempoDeInicio; 
              break;
  }
  glutPostRedisplay();
}

void tempoDeInicio(int value)
{
  
  if(possoContarTempoDeInicio == true)
  { 
    if(contTempoPraComecar < 5)
    {
     contTempoPraComecar += 1; 
     printf("Comeca em: %d\n",contTempoPraComecar);
    }
  }
  glutPostRedisplay();
  glutTimerFunc(tempoInicio,tempoDeInicio,1);
}

//Animação Inimiga para esquerda e pra direita 
void animaInimigoX(int value)
{
  if(inimigo[0].getMoverX() <= -90 && trocarDirecao==false){trocarDirecao = true;}
  if(inimigo[0].getMoverX() >= 90 && trocarDirecao==true){trocarDirecao = false;}
  if(trocarDirecao == false){inimigo[0].setMoverX(-5);}
  if(trocarDirecao == true){inimigo[0].setMoverX(5);}
  glutPostRedisplay();
  glutTimerFunc(tempoInimigoX,animaInimigoX,1);
}

void animaInimigoY(int novoTempo)
{

  if(trocarDirecao == true)
  {
   contarTempo = true;
  }

  if(contarTempo)
  {
    tempo += novoTempo;
   if(tempo == 36)
   {
     tempo = 0;
     inimigo[0].setPosicaoY(-5);
   }
  }

  //printf("tempo: %i\n",tempo);
  glutPostRedisplay();
  glutTimerFunc(tempoInimigoY,animaInimigoY,1);

}

void animaTiroInimigo(int value)
{

    balaInimigo.setMoverY(-1);
    //printf("Bala.Y: %f\n",balaInimigo.getMoverY());
    if(balaInimigo.getMoverY() <= -200)
    {
      balaInimigo.inicializa();
      balaInimigo.setPosicaoX(inimigo[0].getMoverX());
      balaInimigo.setPosicaoY(inimigo[0].getPosicaoY());
    }

  glutPostRedisplay();
  glutTimerFunc(tempoTiroInimigo,animaTiroInimigo,1);
}


void animaTiroPlayer(int value)
{

    balaPlayer.setMoverY(1);
    //printf("Bala.Y: %f\n",balaInimigo.getMoverY());
    if(balaPlayer.getMoverY() >= 200)
    {
      balaPlayer.inicializa();
      balaPlayer.setPosicaoX(player.getMoverX());
      balaPlayer.setPosicaoY(player.getPosicaoY());
    }

  glutPostRedisplay();
  glutTimerFunc(tempoTiroPlayer,animaTiroPlayer,1); 
}
