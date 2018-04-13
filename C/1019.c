#include <stdio.h>
int main(){
	int segundos,horas=0,minutos=0;
	scanf("%d",&segundos);
	while(segundos>=60){
	minutos=minutos+1;
	segundos=segundos-60;
	}
	while(minutos>60){
	minutos=minutos-60;
	horas=horas+1;
	}
       printf("%d:%d:%d\n",horas,minutos,segundos);

	return 0;
}