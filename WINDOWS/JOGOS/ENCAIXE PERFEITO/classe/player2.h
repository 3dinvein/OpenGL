#ifndef PLAYER2_H_INCLUDED
#define PLAYER2_H_INCLUDED
class Player2{

public:
//PLAYER 2
float p2MoverX,p2MoverY,p2MoverZ;
float a2MoverX,a2MoverY,a2MoverZ;

bool apertouSetaPraCima2=false;
bool player2Colidiu,player2ColidiuComLinha;

void Inicia()
{
    p2MoverX=0;
    p2MoverY=-250;
    p2MoverZ=0;

    a2MoverX=0;
    a2MoverY=-225;
    a2MoverZ=0;
    player2Colidiu = false;
}

void CriarPlayer2()
{
    glPushMatrix();
glColor3f(0.1,0.1,0.5);
//glColor3f(0.2,0.2,0.2);
glTranslatef(a2MoverX,a2MoverY,a2MoverZ);
glutSolidCube(25);
glPopMatrix();

glPushMatrix();
glColor3f(0.4,0.4,0.4);
//glColor3f(0.2,0.2,0.2);
glTranslatef(p2MoverX,p2MoverY,p2MoverZ);
glutSolidCube(50);
glPopMatrix();
}
};

#endif // PLAYER2_H_INCLUDED

