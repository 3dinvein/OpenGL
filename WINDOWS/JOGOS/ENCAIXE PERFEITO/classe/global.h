#ifndef GLOBAL_H_INCLUDED
#define GLOBAL_H_INCLUDED
class Global{

public:

bool JogoAtivado, jogoPausado;

int pontos,nivel,tentativa;

unsigned int tempoPlayer,tempoPlayer2,tempoPlayer3,tempoAlvo0,tempoAlvo2,tempoAlvo3;

void Inicia()
{
    JogoAtivado=false;
    jogoPausado=false;
    pontos=0;
    nivel=1;
    tentativa=3;
    tempoPlayer=30;
    tempoPlayer2=10;
    tempoPlayer3=10;
    tempoAlvo0=30;
    tempoAlvo2=10;
    tempoAlvo3=5;
}


//TEXTO PONTOS
void TextoPontos(void){
   char texto[13]= "Pontuacao: ";
   char teste[20];
   int i = 0;
    sprintf(teste," %d",pontos);

    glColor3ub(0,0,0);

    glRasterPos3f(100.0,275.0,2.0);

    for(i =0;i <= strlen(texto);i++)
      glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,texto[i]);

    for(i =0;i <= strlen(teste);i++)
         glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,teste[i]);
}

//TEXTO PONTOS
void TextoTentativa(void){
   char texto[20]= "Tentativa: ";
   char teste[20];
   int i = 0;
    sprintf(teste," %d",tentativa);

    glColor3ub(0,0,0);

    glRasterPos3f(135.0,-280.0,2.0);

    for(i =0;i <= strlen(texto);i++)
      glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,texto[i]);

    for(i =0;i <= strlen(teste);i++)
         glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,teste[i]);
}

// TEXTO DO NIVEL
void TextoNivel(void){
   char texto[13]= "NIVEL: ";
   char teste[20];
   int i = 0;
    sprintf(teste," %d",nivel);

    glColor3ub(0,0,0);

    glRasterPos3f(-200.0,275.0,2.0);

    for(i =0;i <= strlen(texto);i++)
      glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,texto[i]);

    for(i =0;i <= strlen(teste);i++)
         glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,teste[i]);
}

};

#endif // GLOBAL_H_INCLUDED
