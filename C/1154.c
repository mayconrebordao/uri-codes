#include <stdio.h>

int main(){
	int i=0;
	double n=0,d=0;
	while(n>=0){
		scanf("%lf",&n);
		
		if(n>0){
			d+=n;
			i++;
		}
	}
		printf("%.2lf\n",d/i);
	return 0;
}
