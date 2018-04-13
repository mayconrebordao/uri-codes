#include <stdio.h>
int main(){
    double a,b,c,d,e,f,soma=0;
    int p=0,n1=0,n2=0,n3=0,n4=0,n5=0;
    scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f);
    if (a>0){
        p+=1;
        soma+=a;
    }

    if(b>0){
        p+=1;
        soma+=b;
    }

    if(c>=0){
        p+=1;
        soma+=c;
    }

    if(d>=0){
        p+=1;
        soma+=d;
    }

    if(e>=0){
        p+=1;
        soma+=e;
    }
    if(f>=0){
        p+=1;
        soma+=f;
    }

    printf("%d valores positivos\n%0.1lf\n",p,soma/p);
    return 0;
}
