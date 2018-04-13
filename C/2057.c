#include <stdio.h>
int main (){
    int fim,hora,viajem,fuso;
    scanf("%d %d %d",&hora,&viajem,&fuso);
    if(hora==0){
        hora=24;
    }
    fim=(hora+viajem+fuso);
    if(fim>=24){
            fim=fim-24;
    }
    printf("%d\n",fim);

    return 0;
}
