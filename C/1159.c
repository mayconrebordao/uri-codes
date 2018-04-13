#include <stdio.h>
#include <math.h>

int main(){
	int x,i,k=0;
	
	scanf("%d",&x);
	while(x!=0){
		(x%2==0)?(x=x):(x=x+1);
		for(i=0;i<5;i++){
			k+=x;
			x+=2;
		}
		x=0;		
		printf("%d\n",k);
		k=0;
		scanf("%d",&x);		
	}
	return 0;
}

