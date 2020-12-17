class Pause{
private:
    float x1,y1,x2,y2,x3,y3,x4,y4;
public:

void inicializa()
{
    x1 = -100;  y1 = 100;
    x2 = 100;  y2 = 100;
    x3 = 100;  y3 = -100;
    x4 = -100;  y4 = -100;

}
void CriarPausa()
{
     glColor3f(0.5,0.5,0.5);
    glPushMatrix();
    glBegin(GL_QUADS);
    glVertex2f(x1,y1);
    glVertex2f(x2,y2);
    glVertex2f(x3,y3);
    glVertex2f(x4,y4);
    glEnd();
    glPopMatrix();
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

};


