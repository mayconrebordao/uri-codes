#include <stdio.h>
#include <math.h>

int main(){
	int x,i,k=0,m=0,j=0,t=0;
	
		scanf("%d",&x);
		k=0;
		j=1;
		for(i=0;i<x;i++){
			if(i==(x-1)){
				printf("%d\n",m/2);
			}
			else {						
				printf("%d ",m/2);
			}
			m=j+k; //variavel que representa o fibonacci
			k=j;	//mudanca de valores para futura incrementacao
			t=m;	//"												"
			m=j+k;	//"				"						"		"			
			j=t;	//"  '''			'""					'''    ' "
		}
			
	return 0;
}