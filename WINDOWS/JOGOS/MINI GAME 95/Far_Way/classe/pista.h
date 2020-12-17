class Pista{
private:
   float x1,y1,x2,y2,x3,y3,x4,y4,moverLeft,moverRight;
   float x5,y5,x6,y6,x7,y7,x8,y8;
   float x11,y11,x12,y12,x13,y13,x14,y14;
   float x15,y15,x16,y16,x17,y17,x18,y18;

public:
float moverDown;
void inicializa()
{
    x1 = -5;  y1 = 5;
    x2 = 5;  y2 = 5;
    x3 = 5;  y3 = -5;
    x4 = -5;  y4 = -5;
    moverLeft = -75;
    moverRight = 75;
    moverDown = 100;
    x5 = -4.5;  y5 = 4.5;
    x6 = 4.5;  y6 = 4.5;
    x7 = 4.5;  y7 = -4.5;
    x8 = -4.5;  y8 = -4.5;

// FAIXA DA PISTA
    x11 = -4; y11 = 15; x12 = 4; y12 = 15; x13 = 4; y13 = -15; x14 = -4; y14 =-15 ;
    x15 = -3.5; y15 =14.5 ; x16 =3.5 ; y16 =14.5 ; x17 =3.5 ; y17 = -14.5; x18 = -3.5; y18 = -14.5;
}

void CriarPista()
{
    glPushMatrix();
    // BORDA DA PISTA A ESQUERDA EM VERTICAL DE CIMA PARA BAIXO
    //SEQUENCIA DE BLOCOS 1
    // QUADRADO 1
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverLeft,y1+moverDown);
    glVertex2f(x2+moverLeft,y2+moverDown);
    glVertex2f(x3+moverLeft,y3+moverDown);
    glVertex2f(x4+moverLeft,y4+moverDown);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverLeft,y5+moverDown);
    glVertex2f(x6+moverLeft,y6+moverDown);
    glVertex2f(x7+moverLeft,y7+moverDown);
    glVertex2f(x8+moverLeft,y8+moverDown);

     // QUADRADO 2
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverLeft,y1+moverDown-11);
    glVertex2f(x2+moverLeft,y2+moverDown-11);
    glVertex2f(x3+moverLeft,y3+moverDown-11);
    glVertex2f(x4+moverLeft,y4+moverDown-11);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverLeft,y5+moverDown-11);
    glVertex2f(x6+moverLeft,y6+moverDown-11);
    glVertex2f(x7+moverLeft,y7+moverDown-11);
    glVertex2f(x8+moverLeft,y8+moverDown-11);

    // QUADRADO 3
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverLeft,y1+moverDown-22);
    glVertex2f(x2+moverLeft,y2+moverDown-22);
    glVertex2f(x3+moverLeft,y3+moverDown-22);
    glVertex2f(x4+moverLeft,y4+moverDown-22);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverLeft,y5+moverDown-22);
    glVertex2f(x6+moverLeft,y6+moverDown-22);
    glVertex2f(x7+moverLeft,y7+moverDown-22);
    glVertex2f(x8+moverLeft,y8+moverDown-22);
    glEnd();

    //SEQUENCIA DE BLOCOS 2
    // QUADRADO 4
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverLeft,y1+moverDown-44);
    glVertex2f(x2+moverLeft,y2+moverDown-44);
    glVertex2f(x3+moverLeft,y3+moverDown-44);
    glVertex2f(x4+moverLeft,y4+moverDown-44);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverLeft,y5+moverDown-44);
    glVertex2f(x6+moverLeft,y6+moverDown-44);
    glVertex2f(x7+moverLeft,y7+moverDown-44);
    glVertex2f(x8+moverLeft,y8+moverDown-44);
    glEnd();

    // QUADRADO 5
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverLeft,y1+moverDown-55);
    glVertex2f(x2+moverLeft,y2+moverDown-55);
    glVertex2f(x3+moverLeft,y3+moverDown-55);
    glVertex2f(x4+moverLeft,y4+moverDown-55);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverLeft,y5+moverDown-55);
    glVertex2f(x6+moverLeft,y6+moverDown-55);
    glVertex2f(x7+moverLeft,y7+moverDown-55);
    glVertex2f(x8+moverLeft,y8+moverDown-55);
    glEnd();

    // QUADRADO 6
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverLeft,y1+moverDown-66);
    glVertex2f(x2+moverLeft,y2+moverDown-66);
    glVertex2f(x3+moverLeft,y3+moverDown-66);
    glVertex2f(x4+moverLeft,y4+moverDown-66);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverLeft,y5+moverDown-66);
    glVertex2f(x6+moverLeft,y6+moverDown-66);
    glVertex2f(x7+moverLeft,y7+moverDown-66);
    glVertex2f(x8+moverLeft,y8+moverDown-66);
    glEnd();

    //SEQUENCIA DE BLOCOS 3
    // QUADRADO 7
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverLeft,y1+moverDown-88);
    glVertex2f(x2+moverLeft,y2+moverDown-88);
    glVertex2f(x3+moverLeft,y3+moverDown-88);
    glVertex2f(x4+moverLeft,y4+moverDown-88);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverLeft,y5+moverDown-88);
    glVertex2f(x6+moverLeft,y6+moverDown-88);
    glVertex2f(x7+moverLeft,y7+moverDown-88);
    glVertex2f(x8+moverLeft,y8+moverDown-88);
    glEnd();

    // QUADRADO 8
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverLeft,y1+moverDown-99);
    glVertex2f(x2+moverLeft,y2+moverDown-99);
    glVertex2f(x3+moverLeft,y3+moverDown-99);
    glVertex2f(x4+moverLeft,y4+moverDown-99);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverLeft,y5+moverDown-99);
    glVertex2f(x6+moverLeft,y6+moverDown-99);
    glVertex2f(x7+moverLeft,y7+moverDown-99);
    glVertex2f(x8+moverLeft,y8+moverDown-99);
    glEnd();

    // QUADRADO 9
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverLeft,y1+moverDown-110);
    glVertex2f(x2+moverLeft,y2+moverDown-110);
    glVertex2f(x3+moverLeft,y3+moverDown-110);
    glVertex2f(x4+moverLeft,y4+moverDown-110);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverLeft,y5+moverDown-110);
    glVertex2f(x6+moverLeft,y6+moverDown-110);
    glVertex2f(x7+moverLeft,y7+moverDown-110);
    glVertex2f(x8+moverLeft,y8+moverDown-110);
    glEnd();

    //SEQUENCIA DE BLOCOS 4
    // QUADRADO 10
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverLeft,y1+moverDown-132);
    glVertex2f(x2+moverLeft,y2+moverDown-132);
    glVertex2f(x3+moverLeft,y3+moverDown-132);
    glVertex2f(x4+moverLeft,y4+moverDown-132);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverLeft,y5+moverDown-132);
    glVertex2f(x6+moverLeft,y6+moverDown-132);
    glVertex2f(x7+moverLeft,y7+moverDown-132);
    glVertex2f(x8+moverLeft,y8+moverDown-132);
    glEnd();

    // QUADRADO 11
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverLeft,y1+moverDown-143);
    glVertex2f(x2+moverLeft,y2+moverDown-143);
    glVertex2f(x3+moverLeft,y3+moverDown-143);
    glVertex2f(x4+moverLeft,y4+moverDown-143);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverLeft,y5+moverDown-143);
    glVertex2f(x6+moverLeft,y6+moverDown-143);
    glVertex2f(x7+moverLeft,y7+moverDown-143);
    glVertex2f(x8+moverLeft,y8+moverDown-143);
    glEnd();

    // QUADRADO 12
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverLeft,y1+moverDown-154);
    glVertex2f(x2+moverLeft,y2+moverDown-154);
    glVertex2f(x3+moverLeft,y3+moverDown-154);
    glVertex2f(x4+moverLeft,y4+moverDown-154);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverLeft,y5+moverDown-154);
    glVertex2f(x6+moverLeft,y6+moverDown-154);
    glVertex2f(x7+moverLeft,y7+moverDown-154);
    glVertex2f(x8+moverLeft,y8+moverDown-154);
    glEnd();

    //SEQUENCIA DE BLOCOS 5
    // QUADRADO 13
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverLeft,y1+moverDown-176);
    glVertex2f(x2+moverLeft,y2+moverDown-176);
    glVertex2f(x3+moverLeft,y3+moverDown-176);
    glVertex2f(x4+moverLeft,y4+moverDown-176);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverLeft,y5+moverDown-176);
    glVertex2f(x6+moverLeft,y6+moverDown-176);
    glVertex2f(x7+moverLeft,y7+moverDown-176);
    glVertex2f(x8+moverLeft,y8+moverDown-176);
    glEnd();

    // QUADRADO 14
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverLeft,y1+moverDown-187);
    glVertex2f(x2+moverLeft,y2+moverDown-187);
    glVertex2f(x3+moverLeft,y3+moverDown-187);
    glVertex2f(x4+moverLeft,y4+moverDown-187);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverLeft,y5+moverDown-187);
    glVertex2f(x6+moverLeft,y6+moverDown-187);
    glVertex2f(x7+moverLeft,y7+moverDown-187);
    glVertex2f(x8+moverLeft,y8+moverDown-187);
    glEnd();

    // QUADRADO 15
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverLeft,y1+moverDown-198);
    glVertex2f(x2+moverLeft,y2+moverDown-198);
    glVertex2f(x3+moverLeft,y3+moverDown-198);
    glVertex2f(x4+moverLeft,y4+moverDown-198);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverLeft,y5+moverDown-198);
    glVertex2f(x6+moverLeft,y6+moverDown-198);
    glVertex2f(x7+moverLeft,y7+moverDown-198);
    glVertex2f(x8+moverLeft,y8+moverDown-198);
    glEnd();

    //parte de cina do layout
     glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverLeft,y1+moverDown+11);
    glVertex2f(x2+moverLeft,y2+moverDown+11);
    glVertex2f(x3+moverLeft,y3+moverDown+11);
    glVertex2f(x4+moverLeft,y4+moverDown+11);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverLeft,y5+moverDown+11);
    glVertex2f(x6+moverLeft,y6+moverDown+11);
    glVertex2f(x7+moverLeft,y7+moverDown+11);
    glVertex2f(x8+moverLeft,y8+moverDown+11);

    // QUADRADO 3
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverLeft,y1+moverDown+22);
    glVertex2f(x2+moverLeft,y2+moverDown+22);
    glVertex2f(x3+moverLeft,y3+moverDown+22);
    glVertex2f(x4+moverLeft,y4+moverDown+22);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverLeft,y5+moverDown+22);
    glVertex2f(x6+moverLeft,y6+moverDown+22);
    glVertex2f(x7+moverLeft,y7+moverDown+22);
    glVertex2f(x8+moverLeft,y8+moverDown+22);
    glEnd();

    //SEQUENCIA DE BLOCOS 2
    // QUADRADO 4
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverLeft,y1+moverDown+44);
    glVertex2f(x2+moverLeft,y2+moverDown+44);
    glVertex2f(x3+moverLeft,y3+moverDown+44);
    glVertex2f(x4+moverLeft,y4+moverDown+44);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverLeft,y5+moverDown+44);
    glVertex2f(x6+moverLeft,y6+moverDown+44);
    glVertex2f(x7+moverLeft,y7+moverDown+44);
    glVertex2f(x8+moverLeft,y8+moverDown+44);
    glEnd();

    // QUADRADO 5
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverLeft,y1+moverDown+55);
    glVertex2f(x2+moverLeft,y2+moverDown+55);
    glVertex2f(x3+moverLeft,y3+moverDown+55);
    glVertex2f(x4+moverLeft,y4+moverDown+55);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverLeft,y5+moverDown+55);
    glVertex2f(x6+moverLeft,y6+moverDown+55);
    glVertex2f(x7+moverLeft,y7+moverDown+55);
    glVertex2f(x8+moverLeft,y8+moverDown+55);
    glEnd();

    // QUADRADO 6
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverLeft,y1+moverDown+66);
    glVertex2f(x2+moverLeft,y2+moverDown+66);
    glVertex2f(x3+moverLeft,y3+moverDown+66);
    glVertex2f(x4+moverLeft,y4+moverDown+66);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverLeft,y5+moverDown+66);
    glVertex2f(x6+moverLeft,y6+moverDown+66);
    glVertex2f(x7+moverLeft,y7+moverDown+66);
    glVertex2f(x8+moverLeft,y8+moverDown+66);
    glEnd();

    //SEQUENCIA DE BLOCOS 3
    // QUADRADO 7
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverLeft,y1+moverDown+88);
    glVertex2f(x2+moverLeft,y2+moverDown+88);
    glVertex2f(x3+moverLeft,y3+moverDown+88);
    glVertex2f(x4+moverLeft,y4+moverDown+88);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverLeft,y5+moverDown+88);
    glVertex2f(x6+moverLeft,y6+moverDown+88);
    glVertex2f(x7+moverLeft,y7+moverDown+88);
    glVertex2f(x8+moverLeft,y8+moverDown+88);
    glEnd();

    // QUADRADO 8
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverLeft,y1+moverDown+99);
    glVertex2f(x2+moverLeft,y2+moverDown+99);
    glVertex2f(x3+moverLeft,y3+moverDown+99);
    glVertex2f(x4+moverLeft,y4+moverDown+99);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverLeft,y5+moverDown+99);
    glVertex2f(x6+moverLeft,y6+moverDown+99);
    glVertex2f(x7+moverLeft,y7+moverDown+99);
    glVertex2f(x8+moverLeft,y8+moverDown+99);
    glEnd();

    // QUADRADO 9
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverLeft,y1+moverDown+110);
    glVertex2f(x2+moverLeft,y2+moverDown+110);
    glVertex2f(x3+moverLeft,y3+moverDown+110);
    glVertex2f(x4+moverLeft,y4+moverDown+110);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverLeft,y5+moverDown+110);
    glVertex2f(x6+moverLeft,y6+moverDown+110);
    glVertex2f(x7+moverLeft,y7+moverDown+110);
    glVertex2f(x8+moverLeft,y8+moverDown+110);
    glEnd();

    //SEQUENCIA DE BLOCOS 4
    // QUADRADO 10
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverLeft,y1+moverDown+132);
    glVertex2f(x2+moverLeft,y2+moverDown+132);
    glVertex2f(x3+moverLeft,y3+moverDown+132);
    glVertex2f(x4+moverLeft,y4+moverDown+132);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverLeft,y5+moverDown+132);
    glVertex2f(x6+moverLeft,y6+moverDown+132);
    glVertex2f(x7+moverLeft,y7+moverDown+132);
    glVertex2f(x8+moverLeft,y8+moverDown+132);
    glEnd();

    // QUADRADO 11
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverLeft,y1+moverDown+143);
    glVertex2f(x2+moverLeft,y2+moverDown+143);
    glVertex2f(x3+moverLeft,y3+moverDown+143);
    glVertex2f(x4+moverLeft,y4+moverDown+143);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverLeft,y5+moverDown+143);
    glVertex2f(x6+moverLeft,y6+moverDown+143);
    glVertex2f(x7+moverLeft,y7+moverDown+143);
    glVertex2f(x8+moverLeft,y8+moverDown+143);
    glEnd();

    // QUADRADO 12
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverLeft,y1+moverDown+154);
    glVertex2f(x2+moverLeft,y2+moverDown+154);
    glVertex2f(x3+moverLeft,y3+moverDown+154);
    glVertex2f(x4+moverLeft,y4+moverDown+154);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverLeft,y5+moverDown+154);
    glVertex2f(x6+moverLeft,y6+moverDown+154);
    glVertex2f(x7+moverLeft,y7+moverDown+154);
    glVertex2f(x8+moverLeft,y8+moverDown+154);
    glEnd();

    //SEQUENCIA DE BLOCOS 5
    // QUADRADO 13
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverLeft,y1+moverDown+176);
    glVertex2f(x2+moverLeft,y2+moverDown+176);
    glVertex2f(x3+moverLeft,y3+moverDown+176);
    glVertex2f(x4+moverLeft,y4+moverDown+176);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverLeft,y5+moverDown+176);
    glVertex2f(x6+moverLeft,y6+moverDown+176);
    glVertex2f(x7+moverLeft,y7+moverDown+176);
    glVertex2f(x8+moverLeft,y8+moverDown+176);
    glEnd();

    // QUADRADO 14
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverLeft,y1+moverDown+187);
    glVertex2f(x2+moverLeft,y2+moverDown+187);
    glVertex2f(x3+moverLeft,y3+moverDown+187);
    glVertex2f(x4+moverLeft,y4+moverDown+187);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverLeft,y5+moverDown+187);
    glVertex2f(x6+moverLeft,y6+moverDown+187);
    glVertex2f(x7+moverLeft,y7+moverDown+187);
    glVertex2f(x8+moverLeft,y8+moverDown+187);
    glEnd();

    // QUADRADO 15
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverLeft,y1+moverDown+198);
    glVertex2f(x2+moverLeft,y2+moverDown+198);
    glVertex2f(x3+moverLeft,y3+moverDown+198);
    glVertex2f(x4+moverLeft,y4+moverDown+198);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverLeft,y5+moverDown+198);
    glVertex2f(x6+moverLeft,y6+moverDown+198);
    glVertex2f(x7+moverLeft,y7+moverDown+198);
    glVertex2f(x8+moverLeft,y8+moverDown+198);
    glEnd();

    // BORDA DA PISTA A DIREITA EM VERTICAL DE CIMA PARA BAIXO
     //SEQUENCIA DE BLOCOS 1
    // QUADRADO 1
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverRight,y1+moverDown);
    glVertex2f(x2+moverRight,y2+moverDown);
    glVertex2f(x3+moverRight,y3+moverDown);
    glVertex2f(x4+moverRight,y4+moverDown);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverRight,y5+moverDown);
    glVertex2f(x6+moverRight,y6+moverDown);
    glVertex2f(x7+moverRight,y7+moverDown);
    glVertex2f(x8+moverRight,y8+moverDown);

     // QUADRADO 2
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverRight,y1+moverDown-11);
    glVertex2f(x2+moverRight,y2+moverDown-11);
    glVertex2f(x3+moverRight,y3+moverDown-11);
    glVertex2f(x4+moverRight,y4+moverDown-11);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverRight,y5+moverDown-11);
    glVertex2f(x6+moverRight,y6+moverDown-11);
    glVertex2f(x7+moverRight,y7+moverDown-11);
    glVertex2f(x8+moverRight,y8+moverDown-11);

    // QUADRADO 3
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverRight,y1+moverDown-22);
    glVertex2f(x2+moverRight,y2+moverDown-22);
    glVertex2f(x3+moverRight,y3+moverDown-22);
    glVertex2f(x4+moverRight,y4+moverDown-22);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverRight,y5+moverDown-22);
    glVertex2f(x6+moverRight,y6+moverDown-22);
    glVertex2f(x7+moverRight,y7+moverDown-22);
    glVertex2f(x8+moverRight,y8+moverDown-22);
    glEnd();

    //SEQUENCIA DE BLOCOS 2
    // QUADRADO 4
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverRight,y1+moverDown-44);
    glVertex2f(x2+moverRight,y2+moverDown-44);
    glVertex2f(x3+moverRight,y3+moverDown-44);
    glVertex2f(x4+moverRight,y4+moverDown-44);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverRight,y5+moverDown-44);
    glVertex2f(x6+moverRight,y6+moverDown-44);
    glVertex2f(x7+moverRight,y7+moverDown-44);
    glVertex2f(x8+moverRight,y8+moverDown-44);
    glEnd();

    // QUADRADO 5
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverRight,y1+moverDown-55);
    glVertex2f(x2+moverRight,y2+moverDown-55);
    glVertex2f(x3+moverRight,y3+moverDown-55);
    glVertex2f(x4+moverRight,y4+moverDown-55);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverRight,y5+moverDown-55);
    glVertex2f(x6+moverRight,y6+moverDown-55);
    glVertex2f(x7+moverRight,y7+moverDown-55);
    glVertex2f(x8+moverRight,y8+moverDown-55);
    glEnd();

    // QUADRADO 6
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverRight,y1+moverDown-66);
    glVertex2f(x2+moverRight,y2+moverDown-66);
    glVertex2f(x3+moverRight,y3+moverDown-66);
    glVertex2f(x4+moverRight,y4+moverDown-66);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverRight,y5+moverDown-66);
    glVertex2f(x6+moverRight,y6+moverDown-66);
    glVertex2f(x7+moverRight,y7+moverDown-66);
    glVertex2f(x8+moverRight,y8+moverDown-66);
    glEnd();

    //SEQUENCIA DE BLOCOS 3
    // QUADRADO 7
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverRight,y1+moverDown-88);
    glVertex2f(x2+moverRight,y2+moverDown-88);
    glVertex2f(x3+moverRight,y3+moverDown-88);
    glVertex2f(x4+moverRight,y4+moverDown-88);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverRight,y5+moverDown-88);
    glVertex2f(x6+moverRight,y6+moverDown-88);
    glVertex2f(x7+moverRight,y7+moverDown-88);
    glVertex2f(x8+moverRight,y8+moverDown-88);
    glEnd();

    // QUADRADO 8
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverRight,y1+moverDown-99);
    glVertex2f(x2+moverRight,y2+moverDown-99);
    glVertex2f(x3+moverRight,y3+moverDown-99);
    glVertex2f(x4+moverRight,y4+moverDown-99);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverRight,y5+moverDown-99);
    glVertex2f(x6+moverRight,y6+moverDown-99);
    glVertex2f(x7+moverRight,y7+moverDown-99);
    glVertex2f(x8+moverRight,y8+moverDown-99);
    glEnd();

    // QUADRADO 9
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverRight,y1+moverDown-110);
    glVertex2f(x2+moverRight,y2+moverDown-110);
    glVertex2f(x3+moverRight,y3+moverDown-110);
    glVertex2f(x4+moverRight,y4+moverDown-110);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverRight,y5+moverDown-110);
    glVertex2f(x6+moverRight,y6+moverDown-110);
    glVertex2f(x7+moverRight,y7+moverDown-110);
    glVertex2f(x8+moverRight,y8+moverDown-110);
    glEnd();

    //SEQUENCIA DE BLOCOS 4
    // QUADRADO 10
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverRight,y1+moverDown-132);
    glVertex2f(x2+moverRight,y2+moverDown-132);
    glVertex2f(x3+moverRight,y3+moverDown-132);
    glVertex2f(x4+moverRight,y4+moverDown-132);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverRight,y5+moverDown-132);
    glVertex2f(x6+moverRight,y6+moverDown-132);
    glVertex2f(x7+moverRight,y7+moverDown-132);
    glVertex2f(x8+moverRight,y8+moverDown-132);
    glEnd();

    // QUADRADO 11
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverRight,y1+moverDown-143);
    glVertex2f(x2+moverRight,y2+moverDown-143);
    glVertex2f(x3+moverRight,y3+moverDown-143);
    glVertex2f(x4+moverRight,y4+moverDown-143);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverRight,y5+moverDown-143);
    glVertex2f(x6+moverRight,y6+moverDown-143);
    glVertex2f(x7+moverRight,y7+moverDown-143);
    glVertex2f(x8+moverRight,y8+moverDown-143);
    glEnd();

    // QUADRADO 12
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverRight,y1+moverDown-154);
    glVertex2f(x2+moverRight,y2+moverDown-154);
    glVertex2f(x3+moverRight,y3+moverDown-154);
    glVertex2f(x4+moverRight,y4+moverDown-154);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverRight,y5+moverDown-154);
    glVertex2f(x6+moverRight,y6+moverDown-154);
    glVertex2f(x7+moverRight,y7+moverDown-154);
    glVertex2f(x8+moverRight,y8+moverDown-154);
    glEnd();

    //SEQUENCIA DE BLOCOS 5
    // QUADRADO 13
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverRight,y1+moverDown-176);
    glVertex2f(x2+moverRight,y2+moverDown-176);
    glVertex2f(x3+moverRight,y3+moverDown-176);
    glVertex2f(x4+moverRight,y4+moverDown-176);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverRight,y5+moverDown-176);
    glVertex2f(x6+moverRight,y6+moverDown-176);
    glVertex2f(x7+moverRight,y7+moverDown-176);
    glVertex2f(x8+moverRight,y8+moverDown-176);
    glEnd();

    // QUADRADO 14
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverRight,y1+moverDown-187);
    glVertex2f(x2+moverRight,y2+moverDown-187);
    glVertex2f(x3+moverRight,y3+moverDown-187);
    glVertex2f(x4+moverRight,y4+moverDown-187);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverRight,y5+moverDown-187);
    glVertex2f(x6+moverRight,y6+moverDown-187);
    glVertex2f(x7+moverRight,y7+moverDown-187);
    glVertex2f(x8+moverRight,y8+moverDown-187);
    glEnd();

    // QUADRADO 15
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverRight,y1+moverDown-198);
    glVertex2f(x2+moverRight,y2+moverDown-198);
    glVertex2f(x3+moverRight,y3+moverDown-198);
    glVertex2f(x4+moverRight,y4+moverDown-198);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverRight,y5+moverDown-198);
    glVertex2f(x6+moverRight,y6+moverDown-198);
    glVertex2f(x7+moverRight,y7+moverDown-198);
    glVertex2f(x8+moverRight,y8+moverDown-198);
    glEnd();

    //parte de cina do layout
     glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverRight,y1+moverDown+11);
    glVertex2f(x2+moverRight,y2+moverDown+11);
    glVertex2f(x3+moverRight,y3+moverDown+11);
    glVertex2f(x4+moverRight,y4+moverDown+11);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverRight,y5+moverDown+11);
    glVertex2f(x6+moverRight,y6+moverDown+11);
    glVertex2f(x7+moverRight,y7+moverDown+11);
    glVertex2f(x8+moverRight,y8+moverDown+11);

    // QUADRADO 3
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverRight,y1+moverDown+22);
    glVertex2f(x2+moverRight,y2+moverDown+22);
    glVertex2f(x3+moverRight,y3+moverDown+22);
    glVertex2f(x4+moverRight,y4+moverDown+22);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverRight,y5+moverDown+22);
    glVertex2f(x6+moverRight,y6+moverDown+22);
    glVertex2f(x7+moverRight,y7+moverDown+22);
    glVertex2f(x8+moverRight,y8+moverDown+22);
    glEnd();

    //SEQUENCIA DE BLOCOS 2
    // QUADRADO 4
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverRight,y1+moverDown+44);
    glVertex2f(x2+moverRight,y2+moverDown+44);
    glVertex2f(x3+moverRight,y3+moverDown+44);
    glVertex2f(x4+moverRight,y4+moverDown+44);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverRight,y5+moverDown+44);
    glVertex2f(x6+moverRight,y6+moverDown+44);
    glVertex2f(x7+moverRight,y7+moverDown+44);
    glVertex2f(x8+moverRight,y8+moverDown+44);
    glEnd();

    // QUADRADO 5
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverRight,y1+moverDown+55);
    glVertex2f(x2+moverRight,y2+moverDown+55);
    glVertex2f(x3+moverRight,y3+moverDown+55);
    glVertex2f(x4+moverRight,y4+moverDown+55);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverRight,y5+moverDown+55);
    glVertex2f(x6+moverRight,y6+moverDown+55);
    glVertex2f(x7+moverRight,y7+moverDown+55);
    glVertex2f(x8+moverRight,y8+moverDown+55);
    glEnd();

    // QUADRADO 6
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverRight,y1+moverDown+66);
    glVertex2f(x2+moverRight,y2+moverDown+66);
    glVertex2f(x3+moverRight,y3+moverDown+66);
    glVertex2f(x4+moverRight,y4+moverDown+66);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverRight,y5+moverDown+66);
    glVertex2f(x6+moverRight,y6+moverDown+66);
    glVertex2f(x7+moverRight,y7+moverDown+66);
    glVertex2f(x8+moverRight,y8+moverDown+66);
    glEnd();

    //SEQUENCIA DE BLOCOS 3
    // QUADRADO 7
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverRight,y1+moverDown+88);
    glVertex2f(x2+moverRight,y2+moverDown+88);
    glVertex2f(x3+moverRight,y3+moverDown+88);
    glVertex2f(x4+moverRight,y4+moverDown+88);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverRight,y5+moverDown+88);
    glVertex2f(x6+moverRight,y6+moverDown+88);
    glVertex2f(x7+moverRight,y7+moverDown+88);
    glVertex2f(x8+moverRight,y8+moverDown+88);
    glEnd();

    // QUADRADO 8
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverRight,y1+moverDown+99);
    glVertex2f(x2+moverRight,y2+moverDown+99);
    glVertex2f(x3+moverRight,y3+moverDown+99);
    glVertex2f(x4+moverRight,y4+moverDown+99);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverRight,y5+moverDown+99);
    glVertex2f(x6+moverRight,y6+moverDown+99);
    glVertex2f(x7+moverRight,y7+moverDown+99);
    glVertex2f(x8+moverRight,y8+moverDown+99);
    glEnd();

    // QUADRADO 9
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverRight,y1+moverDown+110);
    glVertex2f(x2+moverRight,y2+moverDown+110);
    glVertex2f(x3+moverRight,y3+moverDown+110);
    glVertex2f(x4+moverRight,y4+moverDown+110);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverRight,y5+moverDown+110);
    glVertex2f(x6+moverRight,y6+moverDown+110);
    glVertex2f(x7+moverRight,y7+moverDown+110);
    glVertex2f(x8+moverRight,y8+moverDown+110);
    glEnd();

    //SEQUENCIA DE BLOCOS 4
    // QUADRADO 10
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverRight,y1+moverDown+132);
    glVertex2f(x2+moverRight,y2+moverDown+132);
    glVertex2f(x3+moverRight,y3+moverDown+132);
    glVertex2f(x4+moverRight,y4+moverDown+132);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverRight,y5+moverDown+132);
    glVertex2f(x6+moverRight,y6+moverDown+132);
    glVertex2f(x7+moverRight,y7+moverDown+132);
    glVertex2f(x8+moverRight,y8+moverDown+132);
    glEnd();

    // QUADRADO 11
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverRight,y1+moverDown+143);
    glVertex2f(x2+moverRight,y2+moverDown+143);
    glVertex2f(x3+moverRight,y3+moverDown+143);
    glVertex2f(x4+moverRight,y4+moverDown+143);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverRight,y5+moverDown+143);
    glVertex2f(x6+moverRight,y6+moverDown+143);
    glVertex2f(x7+moverRight,y7+moverDown+143);
    glVertex2f(x8+moverRight,y8+moverDown+143);
    glEnd();

    // QUADRADO 12
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverRight,y1+moverDown+154);
    glVertex2f(x2+moverRight,y2+moverDown+154);
    glVertex2f(x3+moverRight,y3+moverDown+154);
    glVertex2f(x4+moverRight,y4+moverDown+154);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverRight,y5+moverDown+154);
    glVertex2f(x6+moverRight,y6+moverDown+154);
    glVertex2f(x7+moverRight,y7+moverDown+154);
    glVertex2f(x8+moverRight,y8+moverDown+154);
    glEnd();

    //SEQUENCIA DE BLOCOS 5
    // QUADRADO 13
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverRight,y1+moverDown+176);
    glVertex2f(x2+moverRight,y2+moverDown+176);
    glVertex2f(x3+moverRight,y3+moverDown+176);
    glVertex2f(x4+moverRight,y4+moverDown+176);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverRight,y5+moverDown+176);
    glVertex2f(x6+moverRight,y6+moverDown+176);
    glVertex2f(x7+moverRight,y7+moverDown+176);
    glVertex2f(x8+moverRight,y8+moverDown+176);
    glEnd();

    // QUADRADO 14
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverRight,y1+moverDown+187);
    glVertex2f(x2+moverRight,y2+moverDown+187);
    glVertex2f(x3+moverRight,y3+moverDown+187);
    glVertex2f(x4+moverRight,y4+moverDown+187);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverRight,y5+moverDown+187);
    glVertex2f(x6+moverRight,y6+moverDown+187);
    glVertex2f(x7+moverRight,y7+moverDown+187);
    glVertex2f(x8+moverRight,y8+moverDown+187);
    glEnd();

    // QUADRADO 15
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverRight,y1+moverDown+198);
    glVertex2f(x2+moverRight,y2+moverDown+198);
    glVertex2f(x3+moverRight,y3+moverDown+198);
    glVertex2f(x4+moverRight,y4+moverDown+198);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverRight,y5+moverDown+198);
    glVertex2f(x6+moverRight,y6+moverDown+198);
    glVertex2f(x7+moverRight,y7+moverDown+198);
    glVertex2f(x8+moverRight,y8+moverDown+198);
    glEnd();
    glPopMatrix();
}

void CriarFaixa()
{
     glPushMatrix();
    // FAIXA DA PISTA EM VERTICAL DE CIMA PARA BAIXO
    //SEQUENCIA DE BLOCOS 1
    // QUADRADO 1
    glColor3f(0.5,0.5,0.5);
    glBegin(GL_QUADS);
    glVertex2f(x11,y11+moverDown);
    glVertex2f(x12,y12+moverDown);
    glVertex2f(x13,y13+moverDown);
    glVertex2f(x14,y14+moverDown);
    glColor3f(0,0,0);
    glVertex2f(x15,y15+moverDown);
    glVertex2f(x16,y16+moverDown);
    glVertex2f(x17,y17+moverDown);
    glVertex2f(x18,y18+moverDown);
     glEnd();
     // QUADRADO 2
    glColor3f(0.5,0.5,0.5);
    glBegin(GL_QUADS);
    glVertex2f(x11,y11+moverDown-50);
    glVertex2f(x12,y12+moverDown-50);
    glVertex2f(x13,y13+moverDown-50);
    glVertex2f(x14,y14+moverDown-50);
    glColor3f(0,0,0);
    glVertex2f(x15,y15+moverDown-50);
    glVertex2f(x16,y16+moverDown-50);
    glVertex2f(x17,y17+moverDown-50);
    glVertex2f(x18,y18+moverDown-50);
    glEnd();
  // QUADRADO 3
    glColor3f(0.5,0.5,0.5);
    glBegin(GL_QUADS);
    glVertex2f(x11,y11+moverDown-100);
    glVertex2f(x12,y12+moverDown-100);
    glVertex2f(x13,y13+moverDown-100);
    glVertex2f(x14,y14+moverDown-100);
    glColor3f(0,0,0);
    glVertex2f(x15,y15+moverDown-100);
    glVertex2f(x16,y16+moverDown-100);
    glVertex2f(x17,y17+moverDown-100);
    glVertex2f(x18,y18+moverDown-100);
    glEnd();

 glColor3f(0.5,0.5,0.5);
    glBegin(GL_QUADS);
    glVertex2f(x11,y11+moverDown-150);
    glVertex2f(x12,y12+moverDown-150);
    glVertex2f(x13,y13+moverDown-150);
    glVertex2f(x14,y14+moverDown-150);
    glColor3f(0,0,0);
    glVertex2f(x15,y15+moverDown-150);
    glVertex2f(x16,y16+moverDown-150);
    glVertex2f(x17,y17+moverDown-150);
    glVertex2f(x18,y18+moverDown-150);
    glEnd();
     glColor3f(0.5,0.5,0.5);
    glBegin(GL_QUADS);
    glVertex2f(x11,y11+moverDown-200);
    glVertex2f(x12,y12+moverDown-200);
    glVertex2f(x13,y13+moverDown-200);
    glVertex2f(x14,y14+moverDown-200);
    glColor3f(0,0,0);
    glVertex2f(x15,y15+moverDown-200);
    glVertex2f(x16,y16+moverDown-200);
    glVertex2f(x17,y17+moverDown-200);
    glVertex2f(x18,y18+moverDown-200);
    glEnd();

     // QUADRADO 2
    glColor3f(0.5,0.5,0.5);
    glBegin(GL_QUADS);
    glVertex2f(x11,y11+moverDown);
    glVertex2f(x12,y12+moverDown);
    glVertex2f(x13,y13+moverDown);
    glVertex2f(x14,y14+moverDown);
    glColor3f(0,0,0);
    glVertex2f(x15,y15+moverDown);
    glVertex2f(x16,y16+moverDown);
    glVertex2f(x17,y17+moverDown);
    glVertex2f(x18,y18+moverDown);
    glEnd();
  // QUADRADO 3
    glColor3f(0.5,0.5,0.5);
    glBegin(GL_QUADS);
    glVertex2f(x11,y11+moverDown+50);
    glVertex2f(x12,y12+moverDown+50);
    glVertex2f(x13,y13+moverDown+50);
    glVertex2f(x14,y14+moverDown+50);
    glColor3f(0,0,0);
    glVertex2f(x15,y15+moverDown+50);
    glVertex2f(x16,y16+moverDown+50);
    glVertex2f(x17,y17+moverDown+50);
    glVertex2f(x18,y18+moverDown+50);
    glEnd();

    // QUADRADO 4
    glColor3f(0.5,0.5,0.5);
    glBegin(GL_QUADS);
    glVertex2f(x11,y11+moverDown+100);
    glVertex2f(x12,y12+moverDown+100);
    glVertex2f(x13,y13+moverDown+100);
    glVertex2f(x14,y14+moverDown+100);
    glColor3f(0,0,0);
    glVertex2f(x15,y15+moverDown+100);
    glVertex2f(x16,y16+moverDown+100);
    glVertex2f(x17,y17+moverDown+100);
    glVertex2f(x18,y18+moverDown+100);
    glEnd();

glColor3f(0.5,0.5,0.5);
    glBegin(GL_QUADS);
    glVertex2f(x11,y11+moverDown+150);
    glVertex2f(x12,y12+moverDown+150);
    glVertex2f(x13,y13+moverDown+150);
    glVertex2f(x14,y14+moverDown+150);
    glColor3f(0,0,0);
    glVertex2f(x15,y15+moverDown+150);
    glVertex2f(x16,y16+moverDown+150);
    glVertex2f(x17,y17+moverDown+150);
    glVertex2f(x18,y18+moverDown+150);
    glEnd();

    glColor3f(0.5,0.5,0.5);
    glBegin(GL_QUADS);
    glVertex2f(x11,y11+moverDown+200);
    glVertex2f(x12,y12+moverDown+200);
    glVertex2f(x13,y13+moverDown+200);
    glVertex2f(x14,y14+moverDown+200);
    glColor3f(0,0,0);
    glVertex2f(x15,y15+moverDown+200);
    glVertex2f(x16,y16+moverDown+200);
    glVertex2f(x17,y17+moverDown+200);
    glVertex2f(x18,y18+moverDown+200);
    glEnd();
}
};
