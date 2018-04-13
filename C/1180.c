#include <stdio.h>

int main(){
	int n,i,j,m=999999;
	scanf("%d",&n);
	int vetor[n];
	for(i=0;i<n;i++){
		scanf("%d",&vetor[i]);
		if(vetor[i]<m){
			m=vetor[i];
			j=i;
		}
	}
	printf("Menor valor: %d\nPosicao: %d\n",m,j);
	return 0;
}