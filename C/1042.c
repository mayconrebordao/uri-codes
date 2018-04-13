#include <stdio.h> 
int main() { 
	int v[3];
	
	scanf("%d %d %d",&v[0],&v[1],&v[2]);
	int i = 0,j = 0;
	int k[3];
	k[0] = v[0], k[1] = v[1], k[2] = v[2];

	while (i < 3){
		j = 0;
		while(j < 2){
			if(v[j] > v[j+1]){
				int aux = v[j];
				v[j] = v[j+1];
				v[j+1] = aux;
			}
			j++;
		}
		i++;
	}
	for(i = 0; i < 3; i++){
		printf("%d\n",v[i] );
	}
	printf("\n");
	for(i = 0; i < 3; i++){
		printf("%d\n",k[i] );
	}  
	 return 0;
 }
