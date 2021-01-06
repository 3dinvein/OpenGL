class BalaPlayer{

private:
  float x1,x2,x3,x4;
  float y1,y2,y3,y4;
  float moverX,moverY;
  float posicaoX,posicaoY;

public:


  void inicializa()
  {
    moverX = 0;
    moverY = 0;
    posicaoX = 0;
    posicaoY = 0;
    x1 = -1;
    y1 = 1;
    x2 = 1;
    y2 = 1;
    x3 = 1;
    y3 = -1;
    x4 = -1;
    y4 = -1;
  }

  void criarBala()
  {
    //printf("Bala Criada\n");
    glPushMatrix();
    glTranslatef(posicaoX,posicaoY,0);//Inseri para setar a posição
    glColor3f(1,0,0);
    glBegin(GL_QUADS);
    glVertex2f(x1+moverX,y1+moverY);
    glVertex2f(x2+moverX,y2+moverY);
    glVertex2f(x3+moverX,y3+moverY);
    glVertex2f(x4+moverX,y4+moverY);
    glEnd();
    glPopMatrix();
  }

  //Mover eixo X
  void setMoverX(float novoMoverX)
  {
    moverX += novoMoverX; 
  }

  float getMoverX()
  {
    return moverX;
  }

  //Mover eixo Y
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


  //VERTICE X1 E Y1
  void setX1(float novoX1)
  {
    x1 = novoX1;
  }

  float getX1()
  {
    return x1;
  }

  void setY1(float novoY1)
  {
    y1 = novoY1;
  }

  float getY1()
  {
    return y1;
  }


  //VERTICE X2 E Y2
  void setX2(float novoX2)
  {
    x2 = novoX2;
  }

  float getX2()
  {
    return x2;
  }

  void setY2(float novoY2)
  {
    y2 = novoY2;
  }

  float getY2()
  {
    return y2;
  }


  //VERTICE X3 E Y3
  void setX3(float novoX3)
  {
    x3 = novoX3;
  }

  float getX3()
  {
    return x3;
  }

  void setY3(float novoY3)
  {
    y3 = novoY3;
  }

  float getY3()
  {
    return y3;
  }

  //VERTICE X4 E Y4
  void setX4(float novoX4)
  {
    x4 = novoX4;
  }

  float getX4()
  {
    return x4;
  }

  void setY4(float novoY4)
  {
    y4 = novoY4;
  }

  float getY4()
  {
    return y4;
  }

};
