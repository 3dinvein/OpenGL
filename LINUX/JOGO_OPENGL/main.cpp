#include <GL/freeglut.h>
#include <stdio.h>
#include <stdlib.h>

#include "classes/player.cpp"
#include "classes/inimigo.cpp"

//Instanciações de objetos de classe
Player player;
Inimigo inimigo[15];

//Escopo de funções estão sendo obrigatórios aqui
void inicializaObjetos(void);
void desenha(void);
void tecladoEspecial(int tecla, int x, int y);
void tecladoAscii(unsigned char tecla, int x, int y);
void animaInimigo(int value);

bool trocarDirecao = false;

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
  glutMainLoop();

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
  glutSwapBuffers();

}
//O que queremos que aconteça quando iniciamos o jogo
void inicializaObjetos()
{
  glClearColor(0,0,0,0);
  player.start();
  inimigo[0].inicializa();
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
