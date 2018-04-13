#include <stdio.h>
int main(){
    int a,rep,cont;

    scanf("%d",&rep);
    cont=0;
    while (cont<rep){
        cont++;
        scanf("%d",&a);
        if (a>0 && a%2==0){
            printf("EVEN POSITIVE\n");
        }
        if(a>0 && a%2!=0){
            printf("ODD POSITIVE\n");
        }
        if(a<0 && a%2==0){
            printf("EVEN NEGATIVE\n");
        }
        if(a<0 && a%2!=0){
            printf("ODD NEGATIVE\n");
        }
        if(a==0) {
            printf("NULL\n");
        }
    }
    return 0;
}
