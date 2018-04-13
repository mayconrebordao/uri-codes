#include <stdio.h>
int main(){
    double  salario,imposto;
    scanf("%lf",&salario);
    if(salario<=2000){
		printf("Isento\n");
	}
	if(salario>2000 && salario <=3000){
		imposto=(salario-2000)*0.08;
		printf("R$ %0.2lf\n",imposto);
	}
	if(salario>3000 && salario<=4500){
		imposto=((salario-3000)*0.18)+80;
		printf("R$ %0.2lf\n",imposto);
	}
	if(salario>4500){
		imposto=((salario-4500)*0.28)+350;
		printf("R$ %0.2lf\n",imposto);
	}
   

return 0;

}
