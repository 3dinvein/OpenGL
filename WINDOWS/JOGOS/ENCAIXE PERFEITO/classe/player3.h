#ifndef PLAYER3_H_INCLUDED
#define PLAYER3_H_INCLUDED
class Player3{

public:
//PLAYER 3
float p3MoverX,p3MoverY,p3MoverZ;
float a3MoverX,a3MoverY,a3MoverZ;

bool apertouSetaPraCima3=false;
bool player3Colidiu,player3ColidiuComLinha;

void Inicia()
{
    p3MoverX=0;
    p3MoverY=-250;
    p3MoverZ=0;

    a3MoverX=0;
    a3MoverY=-225;
    a3MoverZ=0;
    player3Colidiu = false;
}

void CriarPlayer3()
{
    glPushMatrix();
glColor3f(0.3,0.3,0.1);
//glColor3f(0.2,0.2,0.2);
glTranslatef(a3MoverX,a3MoverY,a3MoverZ);
glutSolidCube(25);
glPopMatrix();

glPushMatrix();
glColor3f(0.4,0.4,0.4);
//glColor3f(0.2,0.2,0.2);
glTranslatef(p3MoverX,p3MoverY,p3MoverZ);
glutSolidCube(50);
glPopMatrix();
}
};
#endif // PLAYER3_H_INCLUDED
