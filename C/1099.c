#include <stdio.h>
int main(){
    int  x,y,n,soma=0,p;
    scanf("%d",&n);
    while (p<n){
    scanf("%d %d",&x,&y);
		
    
			if (x>y){
				while (y<x){
					y+=1;
					if(y%2==0){
						soma+=0;				
					}
					else if(y%2!=0 && y<x){
						soma+=y;
					}
				}
			}		
				
			
			if (x<y){
				while (y>x){
					x+=1;
					if(x%2==0 ){
						soma+=0;						
					}
					else if (x%2!=0 && x<y){
							soma+=x;
					}
					
				}
				
			}
			printf("%d\n",soma);    
			p++;
			soma=0;
	}

return 0;

}
