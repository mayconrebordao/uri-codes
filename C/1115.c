#include <stdio.h>
int main(){
    int  x=1,y=1;
    while ((x!=0 && y!=0)){
    scanf("%d %d",&x,&y);
    
    if (x>0 &&y>0){
        printf("primeiro\n");
    }
    else if(x>0 && y<0){
        printf("quarto\n");
    }
    else if(x<0 && y<0){
        printf("terceiro\n");
    }
    else if(x<0 && y>0){
        printf("segundo\n");
    }
    
}

    /*1º quadrante = x > 0 e y > 0
2º quadrante = x < 0 e y > 0
3º quadrante = x < 0 e y < 0
4º quadrante = x > 0 e y < 0
*/
return 0;

}
