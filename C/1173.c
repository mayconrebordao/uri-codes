#include <stdio.h>

int main(){
    int valor[10];
	int p,m,i;
    scanf("%d",&valor[0]);
    m=valor[0];
	for (i=1;i<10;i++){
        m=m*2;
        valor[i]=m;
	}
	for (p=0;p<10;p++){
        printf("N[%d] = %d\n",p,valor[p]);
	}
}
