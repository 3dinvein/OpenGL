#ifndef FIT1_H_INCLUDED
#define FIT1_H_INCLUDED
class Fit1{

public:
float e0MoverX,e0MoverY,e0MoverZ;
float e1MoverX,e1MoverY,e1MoverZ;
float e2MoverX,e2MoverY,e2MoverZ;
bool irPraDireita;

void Inicia()
{
e0MoverX=0;
e0MoverY=225;
e0MoverZ=0;
e1MoverX=-25;
e1MoverY=215;
e1MoverZ=0;
e2MoverX=25;
e2MoverY=215;
e2MoverZ=0;

irPraDireita=false;
}

void CriarFit1()
{
   glPushMatrix();
//glColor3f(0.5,0.5,0.5);
    glColor3f(0.2,0.2,0.2);
    glTranslatef(e2MoverX,e2MoverY,e2MoverZ);
    glutSolidCube(24);
    glPopMatrix();

    glPushMatrix();
// glColor3f(0.5,0.5,0.5);
    glColor3f(0.2,0.2,0.2);
    glTranslatef(e1MoverX,e1MoverY,e1MoverZ);
    glutSolidCube(24);
glPopMatrix();

glPushMatrix();
// glColor3f(0.5,0.5,0.5);
glColor3f(0.2,0.2,0.2);
glTranslatef(e0MoverX,e0MoverY,e0MoverZ);
glScalef(3,1,1);
glutSolidCube(25);
glPopMatrix();

}

};

#endif // FIT1_H_INCLUDED

