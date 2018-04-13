#include <stdio.h>
int main(){
    double x,y;
    scanf("%lf %lf",&x,&y);
    if(x==0 && y==0){
        printf("Origem\n");
    }
    else if (x==0 && y!= 0){
        printf("Eixo Y\n");
    }
    else if(x!=0 && y==0){
        printf("Eixo X\n");
    }
    else if(x>0 && y<0){
        printf("Q4\n");
    }
    else if(x<0 && y>0){
        printf("Q2\n");
    }
    else if(x<0 && y<0){
        printf("Q3\n");
    }
    else
         if (x>0 && y>0){
        printf("Q1\n");
    }

    /*1º quadrante = x > 0 e y > 0
2º quadrante = x < 0 e y > 0
3º quadrante = x < 0 e y < 0
4º quadrante = x > 0 e y < 0
*/
return 0;

}
