#include <stdio.h>
#include <math.h>

int main(){
	int x,y,n=0,i,j,k=0;
	scanf("%d",&n);
	
	for(j=0;j<n;j++){
		scanf("%d %d",&x,&y);
		(x%2==0)?(x=x+1):(x=x);
		for(i=0;i<y;i++){
			k+=x;
			x+=2;
		}
		x=0,y=0;		
		printf("%d\n",k);
		k=0;
		if(j==(n-1)){
			break;
		}
	}
	return 0;
}

