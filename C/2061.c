#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main (){
    char *nom1 ="fechou";
    char *nom2 ="clicou";
    
    char nome1[25];
    int p=0,n=0;
    int m;
    int i;
    int fech=0,clic=0,fes=0;
    int g;


    scanf("%d %d",&n,&m);
    g = n;
    for(i=0;i<m;i++){
        scanf("%s",nome1);
        //fechou
        if(strcmp(nom1,nome1)==0){
            g++;
        }
        else{
            g--;
        }
    }

    printf("%d\n",g);
    return 0;
}

