#include <stdio.h>

int main(){
	int num,horas;
	float valor,m;
	scanf("%d",&num);
	scanf("%d",&horas);
	scanf("%f",&valor);
	m=(horas*valor);      
	printf("NUMBER = %d\n",num);
	printf("SALARY = U$ %0.2f\n",m);        
	return 0;
}