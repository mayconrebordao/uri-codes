#include <stdio.h>
#define g 100

int main(){
	double vetor[g],x=0;
	int i;
	scanf("%lf",&x);
	for(i=0;i<100;i++){
		if(i==0){
			vetor[i]=(x);
		}
		
		else if(i!=0){
			x=x/2;
			vetor[i]=x;
		}
	}
	int j;
	for(j=0;j<100;j++){
		printf("N[%d] = %.4lf\n",j,vetor[j]);
	}
	return 0;
}
