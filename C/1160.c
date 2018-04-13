#include <stdio.h>

int main(){
	int pa=0,pb=0,teste=0,i,k=0;
	double ga=0,gb=0;
	int rtf=0,rtf1=0; //rtf = resutado final
	scanf("%d",&teste);
	for(i=0;i<teste;i++){
		scanf("%d %d",&pa,&pb); // populacoes 
		scanf("%lf %lf",&ga,&gb);	// pocentagem de crescimento
		rtf=pa;
		rtf1=pb;
		while (rtf<=rtf1){				
			k++;
			rtf+=(rtf*(ga/100));
			(gb>0)?(rtf1+=(rtf1*(gb/100))):(rtf1=rtf1);
			
			if(k>100){
				break;
			}			
		}
		rtf=0;	rtf1=0;	ga=0;	gb=0;
		(k<=100)?(printf("%d anos.\n",k)):(printf("Mais de 1 seculo.\n"));
		k=0;
	}
	return 0;
}

