#include <stdio.h>
#include <math.h>

int main(){
	int i=0;
	double d=0,g=0;
	for(i=2;i<=100;i++){
		g=i;
		d+=(1/g);
	}
		printf("%.2lf\n",d+1);
	return 0;
}
