#include <stdio.h>

int main(){

   int x,y,n,cont;
   double r;
   scanf("%d",&n);
   cont =0;
    while (cont<n){		
		scanf("%d %d",&x,&y);
		if(y==0){
			printf("divisao impossivel\n");			
		}
		else{
			r=(double)x/y;
			printf("%0.1lf\n",r);
		}
		cont++;		
	}		
	
    return 0;
}