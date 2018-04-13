#include <stdio.h>

int main(){
	int a=0,b,i,j,n,cont=0,cont2=0,d=0;
	scanf("%d",&n);
	for(i=0;i<(n*2);i++){
		(i%2==0)?(a++):(a=a);
		for(j=0;j<3;j++){
			
			if(cont==0){
				b=a*a;
				d=(a*a)*a;
			}			
			else if(cont==1){
				b=a*a+1;
				d=(a*a)*a+1;
				cont2++;
			}			
		}
		printf("%d %d %d\n",a,b,d);
		if(cont2==3){
			cont=0;
			cont2=0;
		}
		else{
			cont=1;
		}		
	}			
	return 0;
}

