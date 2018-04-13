#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Escreva um programa que leia 2 valores X e Y e
 que imprima todos os valores entre eles cujo
  resto da divisão dele por 5 for igual a 2 ou igual a 3.

Entrada

O arquivo de entrada contém 2 valores inteiros quaisquer, não necessariamente em ordem crescente.

*/

int main(){
    int x=0,y=0;
    int i,b=0;
    scanf("%d %d",&x,&y);
    if(x>y){
		b=y;
		y=x;
		x=b;
    }    
    for (i=x+1;i<y;i++){
			if(i%5==2 || i%5==3){
				printf("%d\n",i);
			}
	}
    
return 0;
}

