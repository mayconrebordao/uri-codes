#include <stdio.h>
#include <stdlib.h>

int main(){
    
    double *v = calloc(6,sizeof(double));
    
    int p=0,i;
    
    scanf("%lf\n%lf\n%lf\n%lf\n%lf\n%lf",&v[0],&v[1],&v[2],&v[3],&v[4],&v[5]);
    for(i = 0; i < 6; i++){
    	if(v[i] >=0){
    		p++;
    	}
    }
    printf("%d valores positivos\n",p);
    return 0;
}
