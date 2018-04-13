#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    double raisd,r1,r2,a,b,c,delta,x1,x2;

    scanf("%lf %lf %lf",&a,&b,&c);
    delta=(b*b)-4*(a)*(c);
    if (delta<=0 || a<=0){
        printf("Impossivel calcular\n");
    }
    else{
    raisd=sqrt(delta);
    r1=(-b+raisd)/(2*a);
    r2=(-b-raisd)/(2*a);

    printf("R1 = %0.5lf\nR2 = %0.5lf\n",r1,r2);
    }
    return 0;
}
