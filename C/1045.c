#include <stdio.h>
int main(){
    double a,b,c,A=0,B=0,C=0;
    scanf("%lf %lf %lf",&a,&b,&c);

    if(a>c && c>b){
        A=a; C=b; B=c;
    }
    else if(a>=b && b>=c){
        A=a;B=b;C=c;
    }
    else if(b>=a && a>=c){
        A=b;B=a;C=c;
    }
    else if(b>=c && c>=a){
        A=b;B=c;C=a;
    }
    else if(c>=a && a>=b){
        A=c;B=a;C=b;
    }
    else if(c>=b && b>=a){
        A=c;B=b;C=a;
    }

    if(A>=(B+C)){
        printf("NAO FORMA TRIANGULO\n");
    }
    else if((A*A)==((B*B)+(C*C))){
        printf("TRIANGULO RETANGULO\n");
    }
    else if((A*A)>((B*B)+(C*C))){
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if((A*A)<((B*B)+(C*C))){
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(A==B && A==C){
        printf("TRIANGULO EQUILATERO\n");
    }
    else if(A==C|| A==B ||B==C){
        printf("TRIANGULO ISOSCELES\n");
    }

    /*
    se A ≥ B+C, apresente a mensagem: NAO FORMA TRIANGULO
se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO
se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO
se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO
se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES
*/

    return 0;

}
