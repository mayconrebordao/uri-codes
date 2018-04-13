#include <stdio.h>
#include <stdlib.h>
#define g 6

int main(){
    double vetor[g] ={1.50,2.50,3.50,4.50,5.50};
    double resultado1=0,resultado2=0,resultado3=0,resultado4=0,resultado5=0,resultado=0;
    int i,a,b,d,cont1=1,cont2=1,cont3=1,cont4=1,cont5=1;
    scanf("%d",&a);
    for(i=0;i<a;i++){
       

        scanf("%d %d",&b,&d);

        if(b==1001 && cont1!=0){
            resultado1=d*vetor[0];
            cont1=0;
        }
        else if(b==1002 && cont2!=0){
            resultado2=d*vetor[1];
            cont2=0;
 
        }
        else if(b==1003 && cont3!=0){
            resultado3=d*vetor[2];
            cont3=0;
        }
        else if(b==1004 && cont4!=0){
            resultado4=d*vetor[3];
            cont4=0;
        }
        else if(b==1005 && cont5!=0){
            resultado5=d*vetor[4];
            cont5=0;
        }
        
    }
    resultado=resultado1+resultado2+resultado3+resultado4+resultado5;
    printf("%.2lf\n",resultado);
return 0;
}
