#include <stdio.h>
int main(){
    int  x,y,soma=0;
  
  
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
				
			
				
			
			if (x<=y){
				while (x<y){
					x+=+1;
					if(x%2==0 ){
						soma+=0;						
					}
					else if (x%2!=0 && x<y){
							soma+=x;
					}
					
				}
				
			}
			printf("%d\n",soma);    
	return 0;

}
