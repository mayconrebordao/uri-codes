#include <stdio.h>
#include <stdlib.h>

int main(){
    int a=0,b=0,d=0;
    scanf("%d",&b);
    for (d=0;d<b;d++){
        scanf("%d",&a);
        if(a<=2015 && a != 2015){
            printf("%d D.C.\n",2015-a);
        }
        else if(a>2015 && a!=2015){
            printf("%d A.C.\n",a-2015+1);
        }
        else if(a==2015){
            printf("1 A.C.\n");
        }
    }
return 0;
}
