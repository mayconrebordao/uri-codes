#include <stdio.h>

int main(){
	float valor,valor2,m;
	int cod,num,num2,cod2;
		scanf("%d",&cod);
		scanf("%d",&num);
		scanf("%f",&valor);
		scanf("%d",&cod2);
		scanf("%d",&num2);
		scanf("%f",&valor2);
		m=((num*valor)+(num2*valor2));      
            printf("VALOR A PAGAR: R$ %0.2f\n",m);            
	return 0;
}