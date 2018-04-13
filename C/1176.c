#include <stdio.h>

long long int vetor[60];

void vet1();

int main(){
	vet1();
	int i,n,x;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&x);
		printf("Fib(%d) = %lli\n",x,vetor[x]);
	}
	
	return 0;
}
void vet1(){
	long long int i,k=0,m=0,j=0,t=0;
	
		
		k=0;
		j=1;
		for(i=0;i<61;i++){
			vetor[i]=m/2;
			m=j+k; //variavel que representa o fibonacci
			k=j;	//mudanca de valores para futura incrementacao
			t=m;	//"												"
			m=j+k;	//"				"						"		"			
			j=t;	//"  '''			'""					'''    ' "
			//printf("%lli\n",vetor[i]);
		}
}
