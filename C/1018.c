#include <stdio.h>
int main(){
	int valor=0,num100=0,n100=0,num50=0,n50=0,num20=0,n20=0,num10=0,n10=0,num5=0,n5=0,num2=0,n2=0,num1=0,n1=0;

	scanf("%d",&valor);
    num100=valor/100;
    n100=valor%100;
    num50=n100/50;
    n50=n100%50;
    num20=n50/20;
    n20=n50%20;
    num10=n20/10;
    n10=n20%10;
    num5=n10/5;
    n5=n10%5;
    num2=n5/2;
    n2=n5%2;
    num1=n2/1;
    n1=n2%1;

    printf("%d\n",valor);
	printf("%d nota(s) de R$ 100,00\n",num100);
	printf("%d nota(s) de R$ 50,00\n",num50);
	printf("%d nota(s) de R$ 20,00\n",num20);
	printf("%d nota(s) de R$ 10,00\n",num10);
	printf("%d nota(s) de R$ 5,00\n",num5);
	printf("%d nota(s) de R$ 2,00\n",num2);
	printf("%d nota(s) de R$ 1,00\n",num1);
	return 0;
}