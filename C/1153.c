#include <stdio.h>

int main(){
	int i,n=0,d=1;
	scanf("%d",&n);
	for(i=1,d=1;i<=n;i++){
		d=d*i;
	}
		printf("%d\n",d);
	return 0;
}
