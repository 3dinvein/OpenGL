#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
class Menu{

public:
bool MenuAtivado,MenuOptionsAtivado,MenuControlAtivado,MenuHelpAtivado,menuWinner;

void Inicia()
{

    MenuAtivado=true;
    MenuOptionsAtivado=false;
    MenuControlAtivado=false;
    MenuHelpAtivado=false;
    menuWinner=false;
}

//TEXTO MENU PRINCIPAL
void MenuPrincipal(void){
    char texto0[20]= "FITTING PERFECT";
    char texto1[20]= "1 -> START GAME";
    char texto2[20]= "2 -> OPTIONS";
    char texto3[20]= "3 -> EXIT GAME";
    char texto4[50]= "Product by Eduardo Maia";

   int i = 0;
   //Cor da fonte
   glColor3ub(0,0,0);
   //glColor3f(1,0,0);
   //Posição da palavra
   glRasterPos3f(-50.0,250.0,2.0);
    for(i =0;i <= strlen(texto0);i++)
         glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,texto0[i]);

   glRasterPos3f(-50.0,50.0,2.0);

   //Uso do "for" para escrever mais de um caracter
    for(i =0;i <= strlen(texto1);i++)
         glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,texto1[i]);

glRasterPos3f(-50.0,0.0,2.0);
    for(i =0;i <= strlen(texto2);i++)
         glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,texto2[i]);

         glRasterPos3f(-50.0,-50.0,2.0);
    for(i =0;i <= strlen(texto3);i++)
         glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,texto3[i]);

        glRasterPos3f(50.0,-250.0,2.0);
    for(i =0;i <= strlen(texto4);i++)
         glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,texto4[i]);
}


// MENU OPTIONS
void MenuOptions(void){
    char texto0[45]= "MENU OPTIONS";
   char texto1[60]= "4 -> CONTROL";
    char texto2[60]= "5 -> HELP";
    char texto3[60]= "6 -> EXIT";
     char texto4[50]= "0 -> BACK";
    char texto10[50]= "Product by Eduardo Maia";

   int i = 0;



   //Cor da fonte
   glColor3ub(0,0,0);
   //glColor3f(1,0,0);
   //Posição da palavra
   glRasterPos3f(-50.0,250.0,2.0);
    for(i =0;i <= strlen(texto0);i++)
         glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,texto0[i]);

   glRasterPos3f(-50.0,50.0,2.0);

   //Uso do "for" para escrever mais de um caracter
    for(i =0;i <= strlen(texto1);i++)
         glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,texto1[i]);

glRasterPos3f(-50.0,0.0,2.0);
    for(i =0;i <= strlen(texto2);i++)
         glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,texto2[i]);

         glRasterPos3f(-50.0,-50.0,2.0);
    for(i =0;i <= strlen(texto3);i++)
         glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,texto3[i]);

      glRasterPos3f(-50.0,100.0,2.0);
    for(i =0;i <= strlen(texto4);i++)
         glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,texto4[i]);

        glRasterPos3f(50.0,-250.0,2.0);
    for(i =0;i <= strlen(texto10);i++)
         glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,texto10[i]);
}

// OPÇÕES SELECIONADAS DO MENU - CONTROL
void MenuControl(void){
    char texto0[45]= "MENU CONTROL";
   char texto1[60]= "Use a seta [ UP ] do teclado para lancar o player pra cima";
    char texto2[60]= "Use a seta [ LEFT ] do teclado para se mover para esquerda";
    char texto3[60]= "Use a seta [ RIGHT ] do teclado para se mover para direita";
     char texto9[40]= "Press [ 0 ] to return !";
    char texto10[50]= "Product by Eduardo Maia";

   int i = 0;
   //Cor da fonte
   glColor3ub(0,0,0);
   //glColor3f(1,0,0);
   //Posição da palavra
   glRasterPos3f(-50.0,250.0,2.0);
    for(i =0;i <= strlen(texto0);i++)
         glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,texto0[i]);

   glRasterPos3f(-175.0,50.0,2.0);

   //Uso do "for" para escrever mais de um caracter
    for(i =0;i <= strlen(texto1);i++)
         glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,texto1[i]);

glRasterPos3f(-175.0,0.0,2.0);
    for(i =0;i <= strlen(texto2);i++)
         glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,texto2[i]);

         glRasterPos3f(-175.0,-50.0,2.0);
    for(i =0;i <= strlen(texto3);i++)
         glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,texto3[i]);

  glRasterPos3f(-200.0,-250.0,2.0);
    for(i =0;i <= strlen(texto9);i++)
         glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,texto9[i]);

        glRasterPos3f(50.0,-250.0,2.0);
    for(i =0;i <= strlen(texto10);i++)
         glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,texto10[i]);
}

// HELP
void MenuHelp(void){
    char texto0[45]= "MENU HELP";
    char texto1[100]= "Para avancar neste jogo, voce deve colidir bem no centro do objeto.";
    char texto2[60]= "Voce tera 3 tentativas para acertar o alvo encheio";
    char texto3[80]= "Se voce nao conseguir, entao Game Over pra voce";
    char texto8[40]= "Press [ 0 ] to return !";
    char texto10[50]= "Product by Eduardo Maia";

   int i = 0;
   //Cor da fonte
   glColor3ub(0,0,0);
   //glColor3f(1,0,0);
   //Posição da palavra
   glRasterPos3f(-50.0,250.0,2.0);
    for(i =0;i <= strlen(texto0);i++)
         glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,texto0[i]);

   glRasterPos3f(-200.0,50.0,2.0);

   //Uso do "for" para escrever mais de um caracter
    for(i =0;i <= strlen(texto1);i++)
         glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,texto1[i]);

glRasterPos3f(-175.0,0.0,2.0);
    for(i =0;i <= strlen(texto2);i++)
         glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,texto2[i]);

         glRasterPos3f(-175.0,-50.0,2.0);
    for(i =0;i <= strlen(texto3);i++)
         glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,texto3[i]);

  glRasterPos3f(-200.0,-250.0,2.0);
    for(i =0;i <= strlen(texto8);i++)
         glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,texto8[i]);

        glRasterPos3f(50.0,-250.0,2.0);
    for(i =0;i <= strlen(texto10);i++)
         glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,texto10[i]);
}

// Menu Winner
void MenuWinner(void){
    char texto0[50]= "-- CONGRATULATIONS --";
    char texto1[100]= "YOU'RE A WINNER OF THIS STAGE !";
    char texto2[100]= "EACH STAGE YOU WILL PASS IT WILL BE MORE DIFFICULT";
    char texto3[100]= "You will have new objects and new fittings.";
    char texto8[40]= "Press [ 0 ] to return !";
    char texto10[50]= "Product by Eduardo Maia";

   int i = 0;
   //Cor da fonte
   glColor3ub(0,0,0);
   //glColor3f(1,0,0);
   //Posição da palavra
   glRasterPos3f(-75.0,200.0,2.0);
    for(i =0;i <= strlen(texto0);i++)
         glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,texto0[i]);

   glRasterPos3f(-125.0,50.0,2.0);

   //Uso do "for" para escrever mais de um caracter
    for(i =0;i <= strlen(texto1);i++)
         glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,texto1[i]);

glRasterPos3f(-190.0,0.0,2.0);
    for(i =0;i <= strlen(texto2);i++)
         glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,texto2[i]);

         glRasterPos3f(-135.0,-100.0,2.0);
    for(i =0;i <= strlen(texto3);i++)
         glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,texto3[i]);

  glRasterPos3f(-200.0,-250.0,2.0);
    for(i =0;i <= strlen(texto8);i++)
         glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,texto8[i]);

        glRasterPos3f(50.0,-250.0,2.0);
    for(i =0;i <= strlen(texto10);i++)
         glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,texto10[i]);
}

};

#endif // MENU_H_INCLUDED


