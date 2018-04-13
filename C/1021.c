#include <stdio.h>
#include <stdlib.h>
int main(){

	int num100=0,n100=0,num50=0,n50=0,num20=0;
	double valor;
	int n20=0,num5=0,n5=0,num2=0,n2=0,num10,n10,moe1;
    int  valor2,mod050,moed050,mod025,moed025,mod010,moed010,mod005,moed005,m1;
    int moed001;
	scanf("%lf",&valor);
    valor= 100*valor;
    valor2=  valor;
    num100=valor2/10000;
    n100=valor2%10000;
    num50=n100/5000;
    n50=n100%5000;
    num20=n50/2000;
    n20=n50%2000;
    num10=n20/1000;
    n10=n20%1000;
    num5=n10/500;
    n5=n10%500;
    num2=n5/200;
    n2=n5%200;
    moe1=n2/100;
    m1=n2%100;
    moed050=m1/50;
    mod050=m1%50;
    moed025=mod050/25;
    mod025=mod050%25;
    moed010=mod025/10;
    mod010=mod025%10;
    moed005=mod010/5;
    mod005=mod010%5;
    moed001=mod005;
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n",num100);
	printf("%d nota(s) de R$ 50.00\n",num50);
	printf("%d nota(s) de R$ 20.00\n",num20);
	printf("%d nota(s) de R$ 10.00\n",num10);
	printf("%d nota(s) de R$ 5.00\n",num5);
	printf("%d nota(s) de R$ 2.00\n",num2);
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n",moe1);
	printf("%d moeda(s) de R$ 0.50\n",moed050);
	printf("%d moeda(s) de R$ 0.25\n",moed025);
	printf("%d moeda(s) de R$ 0.10\n",moed010);
	printf("%d moeda(s) de R$ 0.05\n",moed005);
	printf("%d moeda(s) de R$ 0.01\n",moed001);
	return 0;
	
}
