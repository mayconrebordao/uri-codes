#include <stdio.h>

int main(){
	int x,z,m=0,i=0,j=0;
	scanf("%d %d",&x,&z);
	while(z<=x){
		scanf("%d",&z);
	}
	j=0;
	for(i=x;i<z;i++){		
		j+=i;
		m++;
		if(j>z){
			break;
		}		
	}
	printf("%d\n",m);
	return 0;
}
