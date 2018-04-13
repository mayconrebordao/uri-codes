#include <stdio.h>

int main(){
	float m,salario,bonus;
	char nome[20];
		scanf("%s",nome);
		scanf("%f",&salario);
		scanf("%f",&bonus);
		m=(salario+((bonus/100)*15));      
            printf("TOTAL = R$ %0.2f\n",m);            
	return 0;
}