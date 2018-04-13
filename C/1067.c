#include <stdio.h>
int main(){
    int p=0,cont=0;
    scanf("%d",&p);
    if(p%2==0){
        cont=-1;
        while (cont<(p-1)){
            cont+=2;
            printf("%d\n",cont);
    }
    }
    else {
        cont=1;
        printf("%d\n",cont);
        while (cont<(p-1)){
            cont+=2;
            printf("%d\n",cont);
    }
    }
    return 0;
}