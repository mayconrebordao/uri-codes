#include <stdio.h>
int main(){
    int quant,cod;
    double val []={0,4.00,4.50,5.00,2.00,1.50};
    scanf("%d %d",&cod,&quant);

    printf("Total: R$ %0.2lf\n",(quant*val[cod]));
    
    return 0;
}
