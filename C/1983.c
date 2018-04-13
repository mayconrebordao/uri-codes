#include <stdio.h>
int main (){
    int n,i,j,m=0,m1=0;
    float nota=0,nota1=0;
    scanf("%d",&n);
    for(j=0;j<n;j++){
        scanf("%d %f",&m,&nota);
        if(nota>=8.0 && nota>nota1){
            nota1=nota;
            m1=m;
        }
    }
    if(nota1<8){
        printf("Minimum note not reached\n");
    }
    else{
        printf("%d\n",m1);
    }
    return 0;
}
