#include <stdio.h>

int main(){
	double a=0,b=0;
	while (a<=0 || a>10){
		scanf("%lf",&a);
		if(a>10 || a<=0){
			printf("nota invalida\n");
		}
	}
	while (b<=0 || b>10){
		scanf("%lf",&b);
		if(b>10 || b<=0){
			printf("nota invalida\n");
		}
	}
	printf("media = %.2lf\n",(a+b)/2);
	return 0;
}

