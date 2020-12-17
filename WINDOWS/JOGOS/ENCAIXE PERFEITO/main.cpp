#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include "include/biblioteca.h"

#include "classe/player.h"
#include "classe/player2.h"
#include "classe/player3.h"
#include "classe/fit1.h"
#include "classe/fit2.h"
#include "classe/fit3.h"
#include "classe/line.h"
#include "classe/menu.h"
#include "classe/global.h"

Player player;
Player2 player2;
Player3 player3;
Fit1 fit1;
Fit2 fit2;
Fit3 fit3;
Line line;
Menu menu;
Global global;

void InicializaObjetos()
{
    glClearColor(1,1,1,1);
    player.Inicia();
    player2.Inicia();
    player3.Inicia();
    fit1.Inicia();
    fit2.Inicia();
    fit3.Inicia();
    line.Inicia();
    global.Inicia();
    menu.Inicia();
}

void resize(int width, int height)
{
    float aspecto = (float) width / (float) height;

    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(60, aspecto,1,500.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity() ;
    gluLookAt(0,0,500,0,0,0,0,1,0);
}


void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

 if(menu.MenuAtivado)
    {
        menu.MenuPrincipal();
    }

if(global.JogoAtivado && global.jogoPausado==false)
{
    menu.MenuAtivado=false;
if(global.nivel == 1)
{
    global.TextoPontos();
    global.TextoTentativa();
    global.TextoNivel();
    // RECIPIENTE OU INIMIGO
    fit1.CriarFit1();
    //PLAYER E ARMA
    player.CriarPlayer();
    // LINHA QUE DETERMINA SE PLAYER PASSAR PELO RECIPIENTE
    line.CriarLinha();

    if(global.pontos == 50)
    {
        global.nivel = 2;
    }
}
if(global.nivel==2)
{
    global.TextoPontos();
    global.TextoTentativa();
    global.TextoNivel();
    // RECIPIENTE OU INIMIGO
    fit2.CriarFit2();
    //PLAYER E ARMA
    player2.CriarPlayer2();
    // LINHA QUE DETERMINA SE PLAYER PASSAR PELO RECIPIENTE
    line.CriarLinha();

    if(global.pontos == 150)
    {
        global.nivel=3;
    }
}

if(global.nivel==3)
{

    global.TextoPontos();
    global.TextoTentativa();
    global.TextoNivel();
    // RECIPIENTE OU INIMIGO
    fit3.CriarFit3();
    //PLAYER E ARMA
    player3.CriarPlayer3();
    // LINHA QUE DETERMINA SE PLAYER PASSAR PELO RECIPIENTE
    line.CriarLinha();
    if(global.pontos == 200)
    {
        global.nivel=4;
        menu.menuWinner=true;
    }
}

if(global.nivel == 4)
{
   menu.MenuWinner();

}

}// FIM DO IF JOGO ATIVADO

if(menu.MenuOptionsAtivado)
{
    menu.MenuAtivado=false;
    menu.MenuOptions();
}

 if(menu.MenuControlAtivado==true)
{
    menu.MenuOptionsAtivado=false;
    menu.MenuControl();
}

if(menu.MenuHelpAtivado==true)
{
    menu.MenuOptionsAtivado=false;
    menu.MenuHelp();
}

    glutSwapBuffers();
}

void TecladoNormal(unsigned char tecla, int x, int y)
{
      if(tecla == '0')
      {
        menu.MenuAtivado=true;
        global.JogoAtivado=false;
        menu.MenuOptionsAtivado=false;
        menu.MenuControlAtivado=false;
        menu.MenuHelpAtivado=false;
        menu.menuWinner=false;
        InicializaObjetos();
      }

    if(menu.MenuAtivado==true)
    {
        if(tecla == '1')
            global.JogoAtivado=true;

        if(tecla == '2')
            menu.MenuOptionsAtivado=true;

        if(tecla == '3')
             exit(0);
}

if(menu.MenuOptionsAtivado==true)
{
      if(tecla == '4')
            menu.MenuControlAtivado=true;

        if(tecla == '5')
            menu.MenuHelpAtivado=true;

        if(tecla == '6' && menu.MenuAtivado==false)
            exit(0);
}

if(tecla == 'p' || tecla == 'P')
{
    global.jogoPausado=true;
    global.JogoAtivado=false;
}
if(tecla == 'c' || tecla == 'C')
{
    global.jogoPausado=false;
    global.JogoAtivado=true;
}
glutPostRedisplay();
}

void TecladoEspecial(int tecla, int x, int y)
{
if(global.nivel == 1)
{
    if(tecla == GLUT_KEY_LEFT)
    {
         if(player.pMoverX > -175){
            player.pMoverX -= 1;
            player.aMoverX = player.pMoverX;
            //printf("EIXO <- X : %f\n",pMoverX);
        }
    }

    if(tecla == GLUT_KEY_RIGHT)
    {
        if(player.pMoverX < 175){
            player.pMoverX += 1;
            player.aMoverX = player.pMoverX;
        }
    }

    if(tecla == GLUT_KEY_UP)
    {
        player.apertouSetaPraCima=true;
    }
}

if(global.nivel == 2)
{
    if(tecla == GLUT_KEY_LEFT)
    {
         if(player2.p2MoverX > -175){
            player2.p2MoverX -= 1;
            player2.a2MoverX = player2.p2MoverX;
            //printf("EIXO <- X : %f\n",pMoverX);
        }
    }

    if(tecla == GLUT_KEY_RIGHT)
    {
        if(player2.p2MoverX < 175){
            player2.p2MoverX += 1;
            player2.a2MoverX = player2.p2MoverX;
        }
    }

    if(tecla == GLUT_KEY_UP)
    {
        player2.apertouSetaPraCima2=true;
    }
}

if(global.nivel == 3)
{
    if(tecla == GLUT_KEY_LEFT)
    {
         if(player3.p3MoverX > -175){
            player3.p3MoverX -= 1;
            player3.a3MoverX = player3.p3MoverX;
            //printf("EIXO <- X : %f\n",pMoverX);
        }
    }

    if(tecla == GLUT_KEY_RIGHT)
    {
        if(player3.p3MoverX < 175){
            player3.p3MoverX += 1;
            player3.a3MoverX = player3.p3MoverX;
        }
    }

    if(tecla == GLUT_KEY_UP)
    {
        player3.apertouSetaPraCima3=true;
    }
}
    glutPostRedisplay();
}

void AnimaPlayer(int e1)
{


    // NIVEL 1
   if(player.pMoverY < 250 && player.apertouSetaPraCima)
   {
        player.pMoverY +=1;
        player.aMoverY +=1;
        if(player.aMoverX >= fit1.e0MoverX && player.pMoverX <= fit1.e0MoverX){
        if(player.aMoverY >= fit1.e0MoverY-50 && player.pMoverY <= fit1.e0MoverY-50){
        player.pMoverX -=1;
        player.aMoverX -=1;
        player.apertouSetaPraCima=false;
        //printf("O CUBO COLIDIU \n");
        player.playerColidiu=true;
        if(player.playerColidiu)
        {
            global.pontos +=50;
            player.playerColidiu=false;
            player.pMoverX=0;
            player.pMoverY=-225;
            player.pMoverZ=0;
            player.aMoverX=0;
            player.aMoverY=-200;
            player.aMoverZ=0;
        }
        }
}

   if(player.aMoverY >= line.posLinhaY && player.pMoverY <= line.posLinhaY)
   {
        player.playerColidiuComLinha=true;
       // printf("PLAYER COLIDIU COM LINHA\n");
        if(player.playerColidiuComLinha)
        {
            global.tentativa -=1;
            //printf("NUMERO DE TENTATIVAS: %d \n", tentativa);
            player.pMoverX=0;
            player.pMoverY=-225;
            player.pMoverZ=0;
            player.aMoverX=0;
            player.aMoverY=-200;
            player.aMoverZ=0;
            player.playerColidiuComLinha=false;
            player.apertouSetaPraCima=false;

            if(global.tentativa <=0)
            {
                InicializaObjetos();
            }
        }
     }
   }
//printf("EIXO Y: %f\n",pMoverY);
glutTimerFunc(global.tempoPlayer,AnimaPlayer,1);
glutPostRedisplay();

}

void AnimaPlayer2(int p2)
{

// NIVEL 2

   if(player2.p2MoverY < 250 && player2.apertouSetaPraCima2)
   {
        player2.p2MoverY +=1;
        player2.a2MoverY +=1;
        if(player2.a2MoverX >= fit2.e0MoverX2 && player2.p2MoverX <= fit2.e0MoverX2){
        if(player2.a2MoverY >= fit2.e0MoverY2-50 && player2.p2MoverY <= fit2.e0MoverY2-50){
        player2.p2MoverX -=1;
        player2.a2MoverX -=1;
        player2.apertouSetaPraCima2=false;
        //printf("O CUBO COLIDIU \n");
        player2.player2Colidiu=true;
        if(player2.player2Colidiu)
        {
            global.pontos +=50;
            player2.player2Colidiu=false;
            player2.p2MoverX=0;
            player2.p2MoverY=-225;
            player2.p2MoverZ=0;
            player2.a2MoverX=0;
            player2.a2MoverY=-200;
            player2.a2MoverZ=0;
        }
        }
}

   if(player2.a2MoverY >= line.posLinhaY && player2.p2MoverY <= line.posLinhaY)
   {
        player2.player2ColidiuComLinha=true;
       // printf("PLAYER COLIDIU COM LINHA\n");
        if(player2.player2ColidiuComLinha)
        {
            global.tentativa -=1;
            //printf("NUMERO DE TENTATIVAS: %d \n", tentativa);
            player2.p2MoverX=0;
            player2.p2MoverY=-225;
            player2.p2MoverZ=0;
            player2.a2MoverX=0;
            player2.a2MoverY=-200;
            player2.a2MoverZ=0;
            player2.player2ColidiuComLinha=false;
            player2.apertouSetaPraCima2=false;

            if(global.tentativa <=0)
            {
                InicializaObjetos();
            }
        }
     }
   }
//printf("EIXO Y: %f\n",pMoverY);
glutTimerFunc(global.tempoPlayer2,AnimaPlayer2,1);
glutPostRedisplay();

}


void AnimaPlayer3(int p3)
{

// NIVEL 3
   if(player3.p3MoverY < 250 && player3.apertouSetaPraCima3)
   {
        player3.p3MoverY +=1;
        player3.a3MoverY +=1;
        if(player3.a3MoverX >= fit3.e0MoverX3 && player3.p3MoverX <= fit3.e0MoverX3){
        if(player3.a3MoverY >= fit3.e0MoverY3-50 && player3.p3MoverY <= fit3.e0MoverY3-50){
        player3.p3MoverX -=1;
        player3.a3MoverX -=1;
        player3.apertouSetaPraCima3=false;
        //printf("O CUBO COLIDIU \n");
        player3.player3Colidiu=true;
        if(player3.player3Colidiu)
        {
            global.pontos +=50;
            player3.player3Colidiu=false;
            player3.p3MoverX=0;
            player3.p3MoverY=-225;
            player3.p3MoverZ=0;
            player3.a3MoverX=0;
            player3.a3MoverY=-200;
            player3.a3MoverZ=0;
        }
        }
}

   if(player3.a3MoverY >= line.posLinhaY && player3.p3MoverY <= line.posLinhaY)
   {
        player3.player3ColidiuComLinha=true;
       // printf("PLAYER COLIDIU COM LINHA\n");
        if(player3.player3ColidiuComLinha)
        {
            global.tentativa -=1;
            //printf("NUMERO DE TENTATIVAS: %d \n", tentativa);
            player3.p3MoverX=0;
            player3.p3MoverY=-225;
            player3.p3MoverZ=0;
            player3.a3MoverX=0;
            player3.a3MoverY=-200;
            player3.a3MoverZ=0;
            player3.player3ColidiuComLinha=false;
            player3.apertouSetaPraCima3=false;

            if(global.tentativa <=0)
            {
                InicializaObjetos();
            }
        }
     }
   }
//printf("EIXO Y: %f\n",pMoverY);
glutTimerFunc(global.tempoPlayer3,AnimaPlayer3,1);
glutPostRedisplay();

}


void AnimaAlvo0(int n1)
{
      if(global.jogoPausado != true)
      {
    // NIVEL 1
    if(fit1.irPraDireita == true)
    {
        fit1.e0MoverX +=1;
        fit1.e1MoverX +=1;
        fit1.e2MoverX +=1;
    }
    else if(!fit1.irPraDireita)
    {
        fit1.e0MoverX -=1;
        fit1.e1MoverX -=1;
        fit1.e2MoverX -=1;
    }

    if(fit1.e0MoverX >= 170)
    {
        fit1.irPraDireita=false;
    }
    if(fit1.e0MoverX <= -170)
    {
        fit1.irPraDireita=true;
    }
//printf("Posicao da Inimigo Y: %f\n",speed);

  glutTimerFunc(global.tempoAlvo0,AnimaAlvo0,1);
  glutPostRedisplay();}
}

void AnimaAlvo2(int n2)
{
    // NIVEL 2
    if(global.nivel == 2){
    if(fit2.irPraDireita2 == true)
    {
        fit2.e0MoverX2 +=1;
        fit2.e1MoverX2 +=1;
        fit2.e2MoverX2 +=1;
    }
    else if(!fit2.irPraDireita2)
    {
        fit2.e0MoverX2 -=1;
        fit2.e1MoverX2 -=1;
        fit2.e2MoverX2 -=1;
    }

    if(fit2.e0MoverX2 >= 170)
    {
        fit2.irPraDireita2=false;
    }
    if(fit2.e0MoverX2 <= -170)
    {
        fit2.irPraDireita2=true;
    }
//printf("Posicao da Inimigo Y: %f\n",speed);
}
  glutTimerFunc(global.tempoAlvo2,AnimaAlvo2,1);
  glutPostRedisplay();

}

void AnimaAlvo3(int n3)
{
    // NIVEL 3
    if(global.nivel == 3){
    if(fit3.irPraDireita3 == true)
    {
        fit3.e0MoverX3 +=2;
        fit3.e1MoverX3 +=2;
        fit3.e2MoverX3 +=2;
    }
    else if(!fit3.irPraDireita3)
    {
        fit3.e0MoverX3 -=2;
        fit3.e1MoverX3 -=2;
        fit3.e2MoverX3 -=2;
    }

    if(fit3.e0MoverX3 >= 170)
    {
        fit3.irPraDireita3=false;
    }
    if(fit3.e0MoverX3 <= -170)
    {
        fit3.irPraDireita3=true;
    }
//printf("Posicao da Inimigo Y: %f\n",speed);
}
  glutTimerFunc(global.tempoAlvo3,AnimaAlvo3,1);
  glutPostRedisplay();

}

GLfloat light_ambient[]  = { 1.0f, 1.0f, 1.0f, 1.0f };
GLfloat light_diffuse[]  = { 1.0f, 1.0f, 1.0f, 1.0f };
GLfloat light_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
GLfloat light_position[] = { 2.0f, 5.0f, 5.0f, 0.0f };
//GLfloat light_position[] = { 0.0f, 5.0f, 0.0f, 0.0f };


GLfloat mat_ambient[]    = { 0.7f, 0.7f, 0.7f, 1.0f };
GLfloat mat_diffuse[]    = { 0.8f, 0.8f, 0.8f, 1.0f };
GLfloat mat_specular[]   = { 1.0f, 1.0f, 1.0f, 1.0f };
GLfloat high_shininess[] = { 50.0f };

/* Program entry point */

int main(int argc, char *argv[])
{

    glutInitWindowSize(600,800);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("FITTING PERFECT");
    glutReshapeFunc(resize);
    glutDisplayFunc(display);
    glutKeyboardFunc(TecladoNormal);
    glutSpecialFunc(TecladoEspecial);
    // ANIMAÇÃO NIVEL 1
    glutTimerFunc(global.tempoPlayer,AnimaPlayer,1);
    glutTimerFunc(global.tempoAlvo0,AnimaAlvo0,1);
    // ANIMAÇÃO NIVEL 2
    glutTimerFunc(global.tempoPlayer2,AnimaPlayer2,1);
    glutTimerFunc(global.tempoAlvo2,AnimaAlvo2,1);
     // ANIMAÇÃO NIVEL 3
    glutTimerFunc(global.tempoPlayer3,AnimaPlayer3,1);
    glutTimerFunc(global.tempoAlvo3,AnimaAlvo3,1);

    glEnable(GL_CULL_FACE);
    glCullFace(GL_BACK);
    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LESS);
    glShadeModel(GL_SMOOTH);
    glEnable(GL_LIGHT0);
    glEnable(GL_NORMALIZE);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHTING);

    glLightfv(GL_LIGHT0, GL_AMBIENT,  light_ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE,  light_diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);

    glMaterialfv(GL_FRONT, GL_AMBIENT,   mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE,   mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR,  mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);

    InicializaObjetos();
    glutMainLoop();

    return EXIT_SUCCESS;
}
