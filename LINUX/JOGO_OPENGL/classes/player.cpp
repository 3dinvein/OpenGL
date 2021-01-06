class Player{

private:
  float x1,x2,x3;
  float y1,y2,y3;
  float moverX,moverY;
  float posicaoX,posicaoY;
public:
  void start()
  {
    x1 = 0;
    y2 = 6;
    x2 = -6;
    y2 = -6;
    x3 = 6;
    y3 = -6;
    moverX = 0;
    moverY = 0;
    posicaoX = 0;
    posicaoY = -80;
  }

  void criarPlayer()
  {
    glPushMatrix();
    glTranslatef(0,posicaoY,0);
    glColor3f(1,0,0);
    glBegin(GL_TRIANGLES);
    glVertex2f(x1+moverX,y1+moverY);
    glVertex2f(x2+moverX,y2+moverY);
    glVertex2f(x3+moverX,y3+moverY);
    glEnd();
    glPopMatrix();
  }

  void setMoverX(float novoMoverX)
  {
    moverX += novoMoverX; 
  }

  float getMoverX()
  {
    return moverX;
  }

  void setMoverY(float novoMoverY)
  {
    moverY += novoMoverY; 
  }

  float getMoverY()
  {
    return moverY;
  }

//Posição em X
  void setPosicaoX(float novaPosicaoX)
  {
    posicaoX = novaPosicaoX; 
  }

  float getPosicaoX()
  {
    return posicaoX;
  }

  //Posição em Y
  void setPosicaoY(float novaPosicaoY)
  {
    posicaoY = novaPosicaoY; 
  }

  float getPosicaoY()
  {
    return posicaoY;
  }



};
