#include <stdio.h>
int main(){
    int p=0,cont=0;
    scanf("%d",&p);
    if(p%2==0){
        p-=1;
        while(cont<6){
            cont++;
            p+=2;
            printf("%d\n",p);
        }
    }
    else {
        printf("%d\n",p);
        while (cont<5){
            p+=2;
            cont++;
            printf("%d\n",p);
        }
    }
    return 0;
}