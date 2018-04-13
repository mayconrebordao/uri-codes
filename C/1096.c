#include <stdio.h>
int main(){
    int i=1,j=7 ,cont=0;


    while(cont<15){
        while (j>=5){
            printf("I=%d J=%d\n",i,j);
            j-=1;
            i=i;
            cont++;

        }
    i+=2;
    j=7;
    }
    return 0;
}
