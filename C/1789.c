#include <stdio.h>

int main(){
    int a,i,j;
    int niv1=0,niv2=0,niv3=0;
    while(scanf("%i",&a)!=EOF){
        niv1=0; niv2=0;niv3=0;
        for (i=0;i<a;i++){
            scanf("%d",&j);
            if(j<10){
                niv1=1;
            }
            if(j>=10 && j<20){
                niv2=2;
            }
            if (j>=20){
                niv3=3;
            }
        }
        if(niv3!=0){
            printf("%d\n",niv3);
        }
        else if(niv2!=0){
            printf("%d\n",niv2);
        }
        else {
            printf("%d\n",niv1);
        }
    }

}
