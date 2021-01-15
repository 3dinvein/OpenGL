class Menu{

public:

 void menuPrincipal(void)
 {
    char texto1[30] = "JOGO EM OPENGL";
    char texto2[30] = "[ 1 ]  START GAME";
    char texto3[30] = "[ ESC ]  QUIT GAME";

    int i = 0;


    glColor3f(0,0,0);
    glRasterPos2f((100/2)-100,80);
    for(i=0; i <= strlen(texto1);i++)
      glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,texto1[i]);

    glRasterPos2f((100/2)-100,20);
    for(i=0; i <= strlen(texto2);i++)
      glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,texto2[i]);

    glRasterPos2f((100/2)-100,0);
    for(i=0; i <= strlen(texto3);i++)
      glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,texto3[i]);
 }
 
};
