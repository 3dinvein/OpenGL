#include <GL/freeglut.h>

#include "classes/player.cpp"

//Instanciações de objetos de classe
Player player;

//Escopo de funções estão sendo obrigatórios aqui
void inicializar(void);
void desenha(void); 
void tecladoEspecial(int tecla, int x, int y);
void tecladoAscii(unsigned char tecla, int x, int y);

//Função Main é onde tudo acontece de fato
int main(int argc, char** argv){

  glutInit(&argc,argv);
  glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
  glutInitWindowPosition(240,0);
  glutInitWindowSize(480,640);
  glutCreateWindow("Jogo Opengl");
  inicializar();
  glutDisplayFunc(desenha);
  glutSpecialFunc(tecladoEspecial);
  glutKeyboardFunc(tecladoAscii);
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
  glutSwapBuffers();

}
//O que queremos que aconteça quando iniciamos o jogo
void inicializar()
{
  glClearColor(0,0,0,0);
  player.start();
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
