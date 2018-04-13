#include <stdio.h>
#include <stdlib.h>
int main (){
    int i,j,m,n,p;
    int p1,p2;
    while (m!=0 && n!=0){
        scanf("%d %d",&m,&n);
        if (m<=0 || n<=0){
            break;
        }
        if (m>n){
            for (j=0,i=n;i<=m;i++){
                j+=i;
                printf("%d ",i);
            }

        }
        else if (m<n){
            for (j=0,i=m;i<=n;i++){
                printf("%d ",i);
                j+=i;
            }

        }
        printf("Sum=%d\n",j);
    }
return 0;
}
