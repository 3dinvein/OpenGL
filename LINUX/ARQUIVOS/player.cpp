class Player{

private:
  float x1,x2,x3;
  float y1,y2,y3;

public:
  void start()
  {
    x1 = 0;
    y2 = 6;
    x2 = -6;
    y2 = -6;
    x3 = 6;
    y3 = -6;
  }

  void criarPlayer()
  {
    glPushMatrix();
    glTranslatef(0,-80,0);
    glColor3f(1,0,0);
    glBegin(GL_TRIANGLES);
    glVertex2f(x1,y1);
    glVertex2f(x2,y2);
    glVertex2f(x3,y3);
    glEnd();
    glPopMatrix();
  }

};
