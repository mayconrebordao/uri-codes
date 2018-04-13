#include <stdio.h>
#include <stdlib.h>
int main(){
    int a;

    while(scanf("%i",&a)!=EOF){

        if(a>0){
            printf("vai ter duas!\n");
        }
        else if(a==0){
            printf("vai ter copa!\n");
        }
    }
    return 0;

}
