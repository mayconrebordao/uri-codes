#include <stdio.h>
#include <stdlib.h>
int main(){
	int ini,fin,res;
	scanf("%d %d",&ini,&fin);
	if(ini<fin){
		printf("O JOGO DUROU %d HORA(S)\n",fin-ini);
	}
	else if(ini>fin){
		res=((24-ini)+fin);
		printf("O JOGO DUROU %d HORA(S)\n",res);
	}


	 else if(ini==fin){
		printf("O JOGO DUROU 24 HORA(S)\n");
	}

	return 0;
}

