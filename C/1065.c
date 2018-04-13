#include <stdio.h>

int main(void){
	int i, j,v[5];
	scanf("%d %d %d %d %d",&v[0],&v[1],&v[2],&v[3],&v[4]);
	int pares = 0, imp = 0, posi = 0, neg = 0;
	for(i = 0; i < 5; i ++){
		if(v[i]%2 == 0 ){
			pares++;
		}
	}
	printf("%d valores pares\n",pares);
   

	return 0;
}