#include <stdio.h>
int main(){
	double salario,aumento,newsal;
	int perc;
	scanf("%lf",&salario);
	if(salario>0 && salario<=400.00){
        aumento=(salario/100)*15;
        newsal=salario+aumento;
        perc=15;
        printf("Novo salario: %0.2lf\n",newsal);
        printf("Reajuste ganho: %0.2lf\n",aumento);
        printf("Em percentual: %d %%\n",perc);
	}
	else if(salario>400.00 && salario<=800.00){
        aumento=(salario/100)*12;
        newsal=salario+aumento;
        perc=12;
        printf("Novo salario: %0.2lf\n",newsal);
        printf("Reajuste ganho: %0.2lf\n",aumento);
        printf("Em percentual: %d %%\n",perc);
	}
	else if(salario >800.00 && salario<=1200.00){
        aumento=(salario/100)*10;
        newsal=salario+aumento;
        perc=10;
        printf("Novo salario: %0.2lf\n",newsal);
        printf("Reajuste ganho: %0.2lf\n",aumento);
        printf("Em percentual: %d %%\n",perc);
	}
	else if(salario>1200.00 && salario<=2000.00){
        aumento=(salario/100)*7;
        newsal=salario+aumento;
        perc=7;
        printf("Novo salario: %0.2lf\n",newsal);
        printf("Reajuste ganho: %0.2lf\n",aumento);
        printf("Em percentual: %d %%\n",perc);
	}
	else if(salario>2000.00){
        aumento=(salario/100)*4;
        newsal=salario+aumento;
        perc=4;
        printf("Novo salario: %0.2lf\n",newsal);
        printf("Reajuste ganho: %0.2lf\n",aumento);
        printf("Em percentual: %d %%\n",perc);
	}
	 return 0;
 }
