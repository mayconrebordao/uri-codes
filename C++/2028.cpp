#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


int main(){
	int con=0,i=1,n,cont=0;
	while (scanf("%d",&n)!=EOF){
		con++;
		for(i=0;i<=n;i++){			
			for(int j=0;j<i;j++){
				cont++;				
			}
		}
		cont++;
		if(cont==1){
			printf("Caso %d: %d numero\n",con,cont);
		}
		else {
			printf("Caso %d: %d numeros\n",con,cont);
		}
		cont=0;
		for(i=0;i<=n;i++){
			if(i==0){
				printf("%d",i);
			}			
			for(int j=0;j<i;j++){
				printf(" %d",i);				
			}
		}
		printf("\n\n");					
	}
	return 0;
}

