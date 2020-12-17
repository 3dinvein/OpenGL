#include <GL/freeglut.h>


void inicializar(void);
void desenha(void);

int main(int argc, char** argv){

  glutInit(&argc,argv);
  glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
  glutInitWindowPosition(240,0);
  glutInitWindowSize(480,640);
  glutCreateWindow("Jogo Opengl");
  inicializar();
  glutDisplayFunc(desenha);
  glutMainLoop();

}

void desenha()
{
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  glOrtho(-100,100,-100,100,-1,1);
  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();
  glutSwapBuffers();

}

void inicializar()
{
  glClearColor(0,0,0,0);
}
