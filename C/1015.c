#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	float x1,x2,y1,y2,p1,p2,res,raiz;
	scanf("%f%f",&x1,&y1);
	scanf("%f%f",&x2,&y2);
		p1=(x2-x1);
		p2=(y2-y1);
		res=((p1*p1)+(p2*p2));
		raiz=sqrt(res);
		printf("%0.4f\n",raiz);
	return 0;
}
