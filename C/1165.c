#include <stdio.h>

int main(){
    int i,j=0,n,k;
    scanf("%d",&k);
    while(k!=0){
        scanf("%d",&n);

        for(i=2;i< n;i++){
            if(n%i==0){
                j++;
                if(j>2){
                    break;
                }
            }
        }
        if(j!=0 || n==1 || n==0){
            printf("%d nao eh primo\n",n);
        }
        else if (j==0){
            printf("%d eh primo\n",n);
        }
        n=0;    j=0;
    k--;
    }
    return 0;
}
