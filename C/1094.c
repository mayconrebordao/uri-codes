#include <stdio.h>

int main(){
    int  n=0,a,p,total=0;
   float col=0,rat=0,sap=0;
   char nome;
  
  
    scanf("%d",&n);
    for(p=0;p<n;p++){
		scanf("%d %c",&a,&nome);   
		
			if(nome=='C'){
				col+=a;
			}				
			if (nome=='R'){
				rat+=a;
			}				
			if(nome=='S'){
				sap+=a;
			}						
	}
	
	
	total=col+sap+rat;
	printf("Total: %d cobaias\n",total);
	printf("Total de coelhos: %0.0f\n",col);
	printf("Total de ratos: %0.0f\n",rat);
	printf("Total de sapos: %0.0f\n",sap);
	printf("Percentual de coelhos: %0.2f %%\n",100*(col/total));
	printf("Percentual de ratos: %0.2f %%\n",100*(rat/total));	
	printf("Percentual de sapos: %0.2f %%\n",100*(sap/total));
	return 0;
}
