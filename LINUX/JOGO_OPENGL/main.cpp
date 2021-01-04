#include <GL/freeglut.h>
#include <stdio.h>
#include <stdlib.h>

#include "classes/player.cpp"
#include "classes/inimigo.cpp"
#include "classes/bala.cpp"

//Instanciações de objetos de classe
Player player;
Inimigo inimigo[15];
Bala bala;

//Escopo de funções estão sendo obrigatórios aqui
void inicializaObjetos(void);
void desenha(void);
void tecladoEspecial(int tecla, int x, int y);
void tecladoAscii(unsigned char tecla, int x, int y);
void animaInimigo(int value);
void tempoInimigoY(int novoTempo);
void animaTiroInimigo(int value);

bool trocarDirecao = false;
int tempo=0;
bool contarTempo = false;
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
  glutTimerFunc(1000,animaInimigo,1);
  glutTimerFunc(1000,tempoInimigoY,1);
  glutTimerFunc(33,animaTiroInimigo,1);
  glutMainLoop();

}

//O que queremos que aconteça quando iniciamos o jogo
void inicializaObjetos()
{
  glClearColor(0,0,0,0);
  player.start();
  inimigo[0].inicializa();
  bala.inicializa();
  bala.setPosicaoX(inimigo[0].getMoverX());
  bala.setPosicaoY(inimigo[0].getPosicaoY());
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

  player.criarPlayer();
  inimigo[0].criarInimigo();
  bala.criarBala(); 
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
  }
  glutPostRedisplay();
}

//Animação Inimiga para esquerda e pra direita 
void animaInimigo(int value)
{
  if(inimigo[0].getMoverX() <= -90 && trocarDirecao==false){trocarDirecao = true;}
  if(inimigo[0].getMoverX() >= 90 && trocarDirecao==true){trocarDirecao = false;}
  if(trocarDirecao == false){inimigo[0].setMoverX(-5);}
  if(trocarDirecao == true){inimigo[0].setMoverX(5);}

  glutPostRedisplay();
  glutTimerFunc(1000,animaInimigo,1);
}

void tempoInimigoY(int novoTempo)
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
  glutTimerFunc(1000,tempoInimigoY,1);

}

void animaTiroInimigo(int value)
{
  bala.setMoverY(-1);
  //printf("Bala.Y: %f\n",bala.getMoverY());
  if(bala.getMoverY() <= -200)
  {
    bala.inicializa();
    bala.setPosicaoX(inimigo[0].getMoverX());
    bala.setPosicaoY(inimigo[0].getPosicaoY());
  }
  glutPostRedisplay();
  glutTimerFunc(33,animaTiroInimigo,1);

}
