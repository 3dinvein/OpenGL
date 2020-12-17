class Carro2{
private:
   float x1,y1,x2,y2,x3,y3,x4,y4,moverX,moverY;
   float x5,y5,x6,y6,x7,y7,x8,y8;
public:
float tempYCar2;
void inicializa()
{
    x1 = -5;  y1 = 5;
    x2 = 5;  y2 = 5;
    x3 = 5;  y3 = -5;
    x4 = -5;  y4 = -5;
    moverX = 50;
    moverY = 150;
    x5 = -4.5;  y5 = 4.5;
    x6 = 4.5;  y6 = 4.5;
    x7 = 4.5;  y7 = -4.5;
    x8 = -4.5;  y8 = -4.5;
}
void CriarCarrro()
{
    glPushMatrix();
    // QUADRADOS NA VERTICAL DE CIMA PARA BAIXO
    // QUADRADO 1
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverX,y1+moverY);
    glVertex2f(x2+moverX,y2+moverY);
    glVertex2f(x3+moverX,y3+moverY);
    glVertex2f(x4+moverX,y4+moverY);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverX,y5+moverY);
    glVertex2f(x6+moverX,y6+moverY);
    glVertex2f(x7+moverX,y7+moverY);
    glVertex2f(x8+moverX,y8+moverY);

    // QUADRADO 2
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverX,y1+moverY-11);
    glVertex2f(x2+moverX,y2+moverY-11);
    glVertex2f(x3+moverX,y3+moverY-11);
    glVertex2f(x4+moverX,y4+moverY-11);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverX,y5+moverY-11);
    glVertex2f(x6+moverX,y6+moverY-11);
    glVertex2f(x7+moverX,y7+moverY-11);
    glVertex2f(x8+moverX,y8+moverY-11);

    // QUADRADO 3
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverX,y1+moverY-22);
    glVertex2f(x2+moverX,y2+moverY-22);
    glVertex2f(x3+moverX,y3+moverY-22);
    glVertex2f(x4+moverX,y4+moverY-22);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverX,y5+moverY-22);
    glVertex2f(x6+moverX,y6+moverY-22);
    glVertex2f(x7+moverX,y7+moverY-22);
    glVertex2f(x8+moverX,y8+moverY-22);
    glEnd();

    // RODAS DIANTEIRAS
    // RODA ESQUERDA
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverX-11,y1+moverY-11);
    glVertex2f(x2+moverX-11,y2+moverY-11);
    glVertex2f(x3+moverX-11,y3+moverY-11);
    glVertex2f(x4+moverX-11,y4+moverY-11);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverX-11,y5+moverY-11);
    glVertex2f(x6+moverX-11,y6+moverY-11);
    glVertex2f(x7+moverX-11,y7+moverY-11);
    glVertex2f(x8+moverX-11,y8+moverY-11);
    glEnd();

    // RODA DIREITA
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverX+11,y1+moverY-11);
    glVertex2f(x2+moverX+11,y2+moverY-11);
    glVertex2f(x3+moverX+11,y3+moverY-11);
    glVertex2f(x4+moverX+11,y4+moverY-11);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverX+11,y5+moverY-11);
    glVertex2f(x6+moverX+11,y6+moverY-11);
    glVertex2f(x7+moverX+11,y7+moverY-11);
    glVertex2f(x8+moverX+11,y8+moverY-11);
    glEnd();

    // RODAS TRAZEIRAS
    // RODA ESQUERDA
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverX-11,y1+moverY-33);
    glVertex2f(x2+moverX-11,y2+moverY-33);
    glVertex2f(x3+moverX-11,y3+moverY-33);
    glVertex2f(x4+moverX-11,y4+moverY-33);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverX-11,y5+moverY-33);
    glVertex2f(x6+moverX-11,y6+moverY-33);
    glVertex2f(x7+moverX-11,y7+moverY-33);
    glVertex2f(x8+moverX-11,y8+moverY-33);
    glEnd();

    // RODA DIREITA
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverX+11,y1+moverY-33);
    glVertex2f(x2+moverX+11,y2+moverY-33);
    glVertex2f(x3+moverX+11,y3+moverY-33);
    glVertex2f(x4+moverX+11,y4+moverY-33);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(x5+moverX+11,y5+moverY-33);
    glVertex2f(x6+moverX+11,y6+moverY-33);
    glVertex2f(x7+moverX+11,y7+moverY-33);
    glVertex2f(x8+moverX+11,y8+moverY-33);
    glEnd();
    glPopMatrix();

}

void SetMoverX(float novoMoverX)
{
    moverX = novoMoverX;
}
float GetMoverX()
{
 return moverX;
}


void SetMoverY(float novoMoverY)
{
    moverY = novoMoverY;
}
float GetMoverY()
{
 return moverY;
}


float GetX1()
{
 return x1;
}
float GetY1()
{
 return y1;
}


float GetX2()
{
 return x2;
}
float GetY2()
{
 return y2;
}

float GetX3()
{
 return x3;
}
float GetY3()
{
 return y3;
}

float GetX4()
{
 return x4;
}
float GetY4()
{
 return y4;
}

float GetX5()
{
 return x5;
}
float GetY5()
{
 return y5;
}

float GetX6()
{
 return x6;
}
float GetY6()
{
 return y6;
}

float GetX7()
{
 return x7;
}
float GetY7()
{
 return y7;
}

float GetX8()
{
 return x8;
}
float GetY8()
{
 return y8;
}

};

