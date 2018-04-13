#include <stdio.h>

int main(){
    int x,i,j,vetor[1000];
    scanf("%d",&x);

    for(i=0,j=0;i<1000;i++,j++){
        if(j==x){
            j=0;
        }
            vetor[i]=j;
    }
    for(j=0;j<1000;j++){
        printf("N[%d] = %d\n",j,vetor[j]);
    }
    return 0;
}
