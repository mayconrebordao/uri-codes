#include <stdio.h>
#include <stdlib.h>

int main(){
	float dist,litros;
	scanf("%f",&dist);
	scanf("%f",&litros);
	printf("%0.3f km/l\n",dist/litros);	
	return 0;
}

