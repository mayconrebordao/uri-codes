#include <stdio.h>
#include <string.h>
int main(){
	int x,fors,n=0;
	
	char nome[30],*ne ="Thor" ;
	scanf("%d",&x);
	
	for (n=0;n<x;n++){
		scanf ("%s %d",nome,&fors);
		if(fors<=50||strcmp(nome,ne)==0){
			printf("Y\n");
		}
		else {
			printf("N\n");
		}
	}
	return 0;
}

