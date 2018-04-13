#include <stdio.h>

int main(){
	int i=0,x;
	int vetpar[5];
	int vetimpar[5];
	int cont=0,cont2=0;
	while(i<15){
		i++; 
		scanf("%d",&x);
		if(x%2==0){
			vetpar[cont]=x;
			cont++;
		}
		else {
			vetimpar[cont2]=x;
			cont2++;
		}
		if(cont2>4){
			int i;
			for(i=0;i<5;i++){
				printf("impar[%d] = %d\n",i,vetimpar[i]);
			}
			cont2=0;
		}
		else if(cont>4){
			int i;
			for(i=0;i<5;i++){
				printf("par[%d] = %d\n",i,vetpar[i]);
			}
			cont=0;
		}
		if(i==15) {
	
				int i;
				for(i=0;i<cont2;i++){
					printf("impar[%d] = %d\n",i,vetimpar[i]);
				}
				for(i=0;i<cont;i++){
					printf("par[%d] = %d\n",i,vetpar[i]);
				}
		}
	}
	return 0;
}
