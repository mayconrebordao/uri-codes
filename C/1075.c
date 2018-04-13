#include <stdio.h>
int main(){
    int cont=0,N=0,m;
    scanf("%d",&N);
    while (cont<=10000){
        cont++;
        if(cont%N==2){

            printf("%d\n",cont);
        }
    }
    return 0;
}
