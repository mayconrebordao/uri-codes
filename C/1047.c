#include <stdio.h>
int main(){
    int inicio,fim,minuti,minu,resh,resm;
    scanf("%d %d %d %d",&inicio,&minuti,&fim,&minu);

    if(inicio==fim && minuti<=minu){
        resm=24;
        resh=minu-minuti;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",resm,resh);
    }
    else if(inicio==fim && minuti>minu){
        resm=23;
        resh=60-(minuti-minu);
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",resm,resh);
    }
    else if(inicio==fim && minuti<minu){
        resm=0;
        resh=minu-minuti;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",resm,resh);
    }
    else if(inicio>fim && minuti==minu){
        resm=(24-inicio)+fim;
        resh=0;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",resm,resh);
    }
    else if(inicio<fim && minuti==minu){
        resm=fim-inicio;
        resh=0;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",resm,resh);
    }
    else if(inicio<fim && minuti<minu){
       resm=fim-inicio;
       resh=minu-minuti;
       printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",resm,resh);
    }
    else if(inicio<fim && minuti>minu){

       resm=fim-inicio;
       resh=minu-minuti;

       if (resm==1 && minuti>minu){
            resm=0;
            resh=60-(minuti-minu);
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",resm,resh);
       }

       else {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",resm,resh);
       }
    }
    else if(inicio>fim && minuti>minu){
        resm=(24-inicio)+fim;
        resm=resm-1;
        resh=minuti-minu;
        resh=60-resh;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",resm,resh);
    }
    else if(inicio>fim && minuti<minu){
        resm=(24-inicio)+fim;
        resh=minu-minuti;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",resm,resh);
    }
    return 0;

}
