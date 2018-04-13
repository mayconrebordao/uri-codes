#include <stdio.h>

int main(){
/*Escreva um programa para ler as notas da primeira e a segunda 
avaliação de um aluno. Calcule e imprima a média semestral. O 
programa só deverá aceitar notas válidas (uma nota válida deve 
pertencer ao intervalo [0,10]). Cada nota deve ser validada 
separadamente. 
* 
*  No final deve ser impressa a mensagem “novo calculo 
(1-sim 2-nao)”, solicitando ao usuário que informe um código (1 ou 
2) indicando se ele deseja ou não executar o algoritmo novamente, 
(aceitar apenas os código 1 ou 2). Se for informado o código 1 deve 
ser repetida a execução de todo o programa para permitir um novo 
cálculo, caso contrário o programa deve ser encerrado.*/
   int op=0;
   double a,b,m;

    while (op<2){
		
		scanf("%lf",&a) ;
		while (a<0 || a>10){
			printf("nota invalida\n");
			scanf("%lf",&a) ;
		}
		scanf("%lf",&b) ;
		while (b<0 || b>10){
			printf("nota invalida\n");
			scanf("%lf",&b) ;
		}
		m=(a+b)/2;
		
		
		printf("media = %.2lf\n",m);		
		printf("novo calculo (1-sim 2-nao)\n");
		scanf("%d",&op);	
        while(op<1 || op>2){
			printf("novo calculo (1-sim 2-nao)\n");
			scanf("%d",&op);			
		}		
	}
    return 0;
}
