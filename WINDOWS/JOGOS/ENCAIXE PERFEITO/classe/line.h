#ifndef LINE_H_INCLUDED
#define LINE_H_INCLUDED
class Line{

public:
// VARIAVEL QUE DETERMINA COLISÃO DO PLAYER AO PASSAR PELO RECIPIENTE E COLIDIR COM LINHA
float posLinhaX,posLinhaY,posLinhaZ;
float scalaLinhaX,scalaLinhaY,scalaLinhaZ;

void Inicia()
{
posLinhaX=0;
posLinhaY=250;
posLinhaZ=0;
scalaLinhaX=175;
scalaLinhaY=1;
scalaLinhaZ=1;
}

void CriarLinha()
{
glPushMatrix();
glColor3f(0.2,0.0,0.0);
glTranslatef(posLinhaX,posLinhaY,posLinhaZ);
glScalef(scalaLinhaX,scalaLinhaY,scalaLinhaZ);
glutSolidCube(5);
glPopMatrix();
}

};

#endif // LINE_H_INCLUDED

