#include <stdio.h>
#include <math.h>

int main(){
	int i=0;
	double d=0,g=0,k=0;
	for(i=3,k=1;i<=39;i+=2){
		g=i;
		k=k*2;
		d+=(g/k);
	}
		printf("%.2lf\n",d+1);
	return 0;
}
