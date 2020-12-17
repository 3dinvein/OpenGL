#ifndef FIT2_H_INCLUDED
#define FIT2_H_INCLUDED
class Fit2{

public:
float e0MoverX2,e0MoverY2,e0MoverZ2;
float e1MoverX2,e1MoverY2,e1MoverZ2;
float e2MoverX2,e2MoverY2,e2MoverZ2;
bool irPraDireita2;

void Inicia()
{
e0MoverX2=0;
e0MoverY2=225;
e0MoverZ2=0;
e1MoverX2=-25;
e1MoverY2=215;
e1MoverZ2=0;
e2MoverX2=25;
e2MoverY2=215;
e2MoverZ2=0;

irPraDireita2=false;
}

void CriarFit2()
{
   glPushMatrix();
//glColor3f(0.5,0.5,0.5);
    glColor3f(0.2,0.5,0.2);
    glTranslatef(e2MoverX2,e2MoverY2,e2MoverZ2);
    glutSolidCube(24);
    glPopMatrix();

    glPushMatrix();
// glColor3f(0.5,0.5,0.5);
    glColor3f(0.1,0.5,0.1);
    glTranslatef(e1MoverX2,e1MoverY2,e1MoverZ2);
    glutSolidCube(24);
glPopMatrix();

glPushMatrix();
 glColor3f(0.5,0.5,0.5);
//glColor3f(0.2,0.2,0.2);
glTranslatef(e0MoverX2,e0MoverY2,e0MoverZ2);
glScalef(3,1,1);
glutSolidCube(25);
glPopMatrix();

}

};
#endif // FIT2_H_INCLUDED
