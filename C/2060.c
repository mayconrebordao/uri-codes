#include <stdio.h>
int main (){
    int num,mult2=0,mult3=0,mult4=0,mult5=0,cont=0,cont1=0;
    int p,i,j;

    scanf("%d",&num);
    for(p=0;p<num;p++){
        scanf("%d",&i);
        if(i%2==0){
            mult2++;
        }
        if(i%3==0){
            mult3++;
        }
        if(i%4==0){
            mult4++;
        }
        if(i%5==0){
            mult5++;
        }

    }
    printf("%d Multiplo(s) de 2\n%d Multiplo(s) de 3\n",mult2,mult3);
    printf("%d Multiplo(s) de 4\n%d Multiplo(s) de 5\n",mult4,mult5);

}
