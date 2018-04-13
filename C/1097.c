#include <stdio.h>
int main(){
    int i=1,j=7 ,cont=0,t,f=3,n=0;


    while(cont<15){
    t=j;
        while (n<f){
            printf("I=%d J=%d\n",i,j);
            j-=1;
            i=i;
            n++;
            f=3;
            cont++;


        }
    j=t;
    i+=2;
    j+=2;
    t=j;
    n=0;
    }
    return 0;
}

