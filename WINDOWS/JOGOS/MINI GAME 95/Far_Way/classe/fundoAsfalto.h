class Asfalto{
private:
   float x1,y1,x2,y2,x3,y3,x4,y4,x5,y5,x6,y6,x7,y7,x8,y8;
public:
float moverAsfaltoX,moverAsfaltoY;

void inicializa()
{
    x1 = -80;  y1 = 100;
    x2 = 80;  y2 = 100;
    x3 = 80;  y3 = -100;
    x4 = -80;  y4 = -100;

    x5 = -78;  y5 = 98;
    x6 = 78;  y6 = 98;
    x7 = 78;  y7 = -98;
    x8 = -78;  y8 = -98;
   moverAsfaltoX=0;
   moverAsfaltoY=0;
}
void CriarAsfalto()
{
    glPushMatrix();
    glColor3f(0.3,0.3,0.3);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverAsfaltoX,y1+moverAsfaltoY);
    glVertex2f(x2+moverAsfaltoX,y2+moverAsfaltoY);
     glColor3f(0.2,0.2,0.2);
    glVertex2f(x3+moverAsfaltoX,y3+moverAsfaltoY);
    glVertex2f(x4+moverAsfaltoX,y4+moverAsfaltoY);
    glVertex2f(x5+moverAsfaltoX,y5+moverAsfaltoY);
    glVertex2f(x6+moverAsfaltoX,y6+moverAsfaltoY);
    glVertex2f(x7+moverAsfaltoX,y7+moverAsfaltoY);
    glVertex2f(x8+moverAsfaltoX,y8+moverAsfaltoY);
}
};
