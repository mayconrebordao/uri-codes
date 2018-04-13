#include <stdio.h>
#include <stdlib.h>

int main(){

    int a=0,n,m=0,t=0;
    int i,j,q1=0,q2=0,q3=0,q4=0;
    while(scanf("%i",&n)!=EOF){
            int t1=0,t2=0,t3=0,matriz [n][n];
            m=n;
            /*aqui começa a varrer a matriz ,usando um for .

            */
            for (j=0;j<n;j++){
                m--;    /*essa variavel servira para pegar os numeros acima da diagonal secundariia e abaixo da mesma.*/
                for(i=0;i<n;i++){
                    t=1;
                    t2=2;
                    t3=3;


                    if(i>j && i<m){
                        matriz[j][i]=t3;          /* essa variavel incrementa o primerio triangulo,com os valores que a matriz
                                         assumiria nessa posiçao.*/
                    }
                    else if(i<j && i<m){
                        matriz[j][i]=t3;
                                        /* essa variavel incrementa o segundo triangulo,com os valores que a matriz
                                        assumiria nessa posiçao.*/
                    }
                    else if(i<j && i>m){
                       matriz[j][i]=t3;          /* essa variavel incrementa o terceiro triangulo,com os valores que a matriz
                                        assumiria nessa posiçao.*/
                    }
                    else   if(i>j && i>m){
                        matriz[j][i]=t3;          /* essa variavel incrementa o quarto triangulo,com os valores que a matriz
                                         assumiria nessa posiçao.*/
                    }
                    if (i==j){
                        matriz[j][i]=t;
                    }
                    if((i+j)==(n-1)){
                        matriz[j][i]=t2;
                    }
                }

            }
            int g,h;
            for (g=0;g<n;g++){
				for(h=0;h<n;h++){
					printf("%d",matriz[g][h]);
				}
				printf("\n");
				/*codigo para executar pelo terminal = gcc 1.c/matriz_pronta_1.2.c  -ansi -Wall -o matriz*/

			}

    }
    return 0;
}
