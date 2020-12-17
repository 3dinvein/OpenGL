#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED
class Player{

    public:
    //PLAYER
float pMoverX,pMoverY,pMoverZ;
float aMoverX,aMoverY,aMoverZ;

bool apertouSetaPraCima=false;
bool playerColidiu,playerColidiuComLinha;

void Inicia()
{
    pMoverX=0;
    pMoverY=-225;
    pMoverZ=0;

    aMoverX=0;
    aMoverY=-200;
    aMoverZ=0;
    playerColidiu = false;
}

void CriarPlayer()
{
    glPushMatrix();
//glColor3f(0.5,0.5,0.5);
glColor3f(0.2,0.2,0.2);
glTranslatef(aMoverX,aMoverY,aMoverZ);
glutSolidCube(25);
glPopMatrix();

glPushMatrix();
//glColor3f(0.5,0.5,0.5);
glColor3f(0.2,0.2,0.2);
glTranslatef(pMoverX,pMoverY,pMoverZ);
glutSolidCube(50);
glPopMatrix();
}
};

#endif // PLAYER_H_INCLUDED
