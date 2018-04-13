#include <stdio.h>

int main(){
    int  x,n,p=0,in=0,out=0;
    scanf("%d",&n);
    while (p<n){
		scanf("%d",&x);    
			if (x>=10 && x<=20){
				in+=1;
			}			
			else {
				out+=1;	
			}
			
			p++;
				
	}
			printf("%d in\n%d out\n",in,out);    
			
	return 0;

}
