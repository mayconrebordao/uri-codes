#include <stdio.h>
#include <stdlib.h>
int main(){
   double valor[100];
	int p,m;

	for (p=0;p<100;p++){
		scanf("%lf",&valor[p]);
	}

	for (m=0;m<100;m++){

		if(valor[m]<=10.0){
	    	printf("A[%d] = %.1lf\n",m,valor[m]);
		}
	}
return 0;
}
