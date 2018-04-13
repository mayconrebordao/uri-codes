#include <stdio.h>

int main(){
	int a,aux,b,i,d=0;
	scanf("%d %d",&a,&b);
	if(a>b){
		aux=a;
		a=b;
		b=aux;
	}
	
	for (i=a;i<=b;i++){
		if(i%13!=0){
			d+=i;
		}
	}
	printf("%d\n",d);
	return 0;
}

