#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
//void enche();
int main(){
    //enche();
    int i=0,j,n;
    while(scanf("%i",&n)!=EOF){


        if(n==0)break;
        int mat[n][n];
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(i==j){
                    mat[i][j]=1;
                }
                if((i+j)==(n-1)){
                    mat[i][j]=2;
                }
                else if (i!=j){
                    mat[i][j]=3;
                }
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cout<<mat[i][j];
            }
            cout<<endl;
        }


    }
return 0;
}
//void enche(){


//}
