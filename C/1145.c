#include <stdio.h>

int main(){
	int a=0,j=0,b=0,d=0;
	scanf("%d %d",&a,&b);
	while (d<b){
		
		while(j<a){
			j++;
			d++;
			if(d<=b){
				if(j==(a)){	
					printf("%d\n",d);
				}
				else {
					printf("%d ",d);
				}
			}
		}
		j=0;
	}
	return 0;
}
