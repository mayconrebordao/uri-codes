#include <stdio.h>
#include <math.h>
#define   n 20

int main(){
	int j;	
	int  vetor[20];
	for(j=0;j<20;j++){
		scanf("%d",&vetor[j]);
	}
	int i,m=0,k=0;
	k=20;
	for(i=0;i<(10);i++){
		k--;
		m=vetor[i];
		vetor[i]=vetor[k];
		vetor[k]=m;		
	}
	int g=0;
	for(;g<n;g++){
		printf("N[%d] = %d\n",g,vetor[g]);
	}
	return 0;
}

