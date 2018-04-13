#include <stdio.h>
int main(){
	int dias,anos=0,meses=0;
	scanf("%d",&dias);
	while(dias>365){
	anos=anos+1;
	dias=dias-365;
	}
	while(dias>=30){
	meses=meses+1;
    dias=dias-30;
	}

	while(meses>=12){
	meses=meses-12;
	anos=anos+1;
	}

       printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",anos,meses,dias);

	return 0;
}