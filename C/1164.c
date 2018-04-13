#include <stdio.h>

int main(){
	int i,g,j=0,x,n;
	scanf("%d",&n);
	for(g=0;g<n;g++){
		scanf("%d",&x);
		for(i=1;i<x;i++){
			if(x%i==0){
				j+=i;
			}
		}		
		if(j==x){
			printf("%d eh perfeito\n",x);
		}
		else{
			printf("%d nao eh perfeito\n",x);
		}
		j=0;
	}
	return 0;
}
