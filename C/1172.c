#include <stdio.h>

int main(){
    int valor[11];
	int p,m;

	for (p=0;p<10;p++){
		scanf("%d",&valor[p]);
		if(valor[p]<=0){
            valor[p]=1;
		}
	}

	for (m=0;m<10;m++){
	printf("X[%d] = %d\n",m,valor[m]);
	}
}
