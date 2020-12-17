#ifndef FIT3_H_INCLUDED
#define FIT3_H_INCLUDED
class Fit3{

public:
float e0MoverX3,e0MoverY3,e0MoverZ3;
float e1MoverX3,e1MoverY3,e1MoverZ3;
float e2MoverX3,e2MoverY3,e2MoverZ3;
bool irPraDireita3;

void Inicia()
{
e0MoverX3=0;
e0MoverY3=225;
e0MoverZ3=0;
e1MoverX3=-25;
e1MoverY3=215;
e1MoverZ3=0;
e2MoverX3=25;
e2MoverY3=215;
e2MoverZ3=0;

irPraDireita3=false;
}

void CriarFit3()
{
   glPushMatrix();
//glColor3f(0.5,0.5,0.5);
    glColor3f(0.5,0.2,0.2);
    glTranslatef(e2MoverX3,e2MoverY3,e2MoverZ3);
    glutSolidCube(24);
    glPopMatrix();

    glPushMatrix();
// glColor3f(0.5,0.5,0.5);
    glColor3f(0.5,0.1,0.1);
    glTranslatef(e1MoverX3,e1MoverY3,e1MoverZ3);
    glutSolidCube(24);
glPopMatrix();

glPushMatrix();
 glColor3f(0.5,0.5,0.5);
//glColor3f(0.2,0.2,0.2);
glTranslatef(e0MoverX3,e0MoverY3,e0MoverZ3);
glScalef(3,1,1);
glutSolidCube(25);
glPopMatrix();
}
};
#endif // FIT3_H_INCLUDED
