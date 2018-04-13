//matriz_quadradaIV.c
#include <stdio.h>
int main(){
	int i,j,k=0,m=0,n=0,b=0;
	while(scanf("%d",&n)!=EOF){
		int mat[n][n];
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(i==j && i<n/3 || i==j && j<n/3){
					mat[i][j]=2;
				}
				else if(i==j && i>=n-n/3 || i==j && j>=n-n/3){
					mat[i][j]=2;
				}
				else if(i+j == n-1 && i<n/3 || i+j == n-1 && j<n/3 ){
					mat[i][j]=3;
				}
				else if(i+j == n-1 && i>=n-n/3 || i+j == n-1 && j>=n-n/3 ){
					mat[i][j]=3;
				}
				else if(i<n/3 || j<n/3 || i>=n-(n/3) || j>=n-(n/3) && i!=j && i+j != n-1){
					mat[i][j]=0;
				}

				else if(i>=n/3 || j>=n/3 || i<n-(n/3) || j<n-(n/3)) {
					mat[i][j]=1;
				}
				if(i==j && i+j == n-1){
					mat[i][j]=4;
				}
			}
		}
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				printf("%d",mat[i][j] );
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}