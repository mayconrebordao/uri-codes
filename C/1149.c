#include <stdio.h>

int main(){
	int a=0,i,n=0,d=0,j=0;
	scanf("%d %d",&a,&n);
	while (n<=0){
		scanf("%d",&n);
	}
		j=a;
		for(i=0;i<n;i++){
            d+=j;
            j++;
		}
		printf("%d\n",d);
	return 0;
}
