#include <stdio.h>
#include <math.h>

int main(){
	int n=0,j;
	scanf("%d",&n);
	
	for(j=1;j<=n;j++){
		
		if(n%j==0){
			printf("%d\n",j);
		}
	}
	return 0;
}

