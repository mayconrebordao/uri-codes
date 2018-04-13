#include <stdio.h>

int main(void){
	int i, j,v[5];
	scanf("%d %d %d %d %d",&v[0],&v[1],&v[2],&v[3],&v[4]);
	int pares = 0, imp = 0, posi = 0, neg = 0;
	for(i = 0; i < 5; i ++){
		if(v[i]%2 == 0 ){
			pares++;
		}
		else{
			imp++;
		}
		if(v[i] > 0){
			posi++;
		}
		else if (v[i] < 0){
			neg++;
		}
	}
	printf("%d valor(es) par(es)\n",pares);
    printf("%d valor(es) impar(es)\n",imp);
    printf("%d valor(es) positivo(s)\n",posi);
    printf("%d valor(es) negativo(s)\n",neg);

	return 0;
}