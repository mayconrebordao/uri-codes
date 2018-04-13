#include <stdio.h>
#include <stdlib.h>
#define g 12
#define o 12
int main(){
    int n,c=0,l=0,r=0,q=0,m=0,t=0,cont1=0;
    char nom;
    int i,j;
    double q1=0,q2=0,q3=0,q4=0;
    double  matriz [g][o];
    n=12;
    scanf("%c",&nom);
	for (j=0;j<n;j++){
		for(i=0;i<n;i++){
			scanf("%lf",&matriz [j] [i]);
			if(i>j){
                q1+=matriz [j][i];
                cont1++;
			}
		}
    }
	if(nom=='S'){
        printf("%0.1lf\n",q1);
	}
	if(nom=='M'){
        printf("%0.1lf\n",q1/cont1);
	}
    return 0;
}
