#include <stdio.h>
int main(){
    int par ,res=0,quad=0 ,i;
    scanf("%d",&par);
    for (i=2;i<=par;i++){
        if(i%2==0){
        printf("%d^2 = %d\n",i,i*i);
    }
    }
return 0;
}
