#include <stdio.h>

int main(){
    int  n,p=0;
    double a,b,c,m;
    scanf("%d",&n);
    while (p<n){
		scanf("%lf %lf %lf",&a,&b,&c);    
		m=((a*2)+(b*3)+(c*5))/10;	
		printf("%0.1lf\n",m);	
			
			p++;				
	}
	return 0;
}
