#include <stdio.h>

int main(){
	int n,i,j,b=0,m=0;
	while(n!=0){
			scanf("%d",&n);
			if(n==0){
				break;
			}
			int matriz[n][n];
			m=n;
			for(i = 0 ; i < n ; i++){
				b++;
				for( j = 0 ; j < n ; j++ ){
					matriz[i][j]=b;
				}
			}
			//------------------------------------------
			int e=0;//,r=0;
			m=0;m=n;b=0;
			for(i=e;i<n;i++){
				m--;	
				for (j=e;j<=n;j++){
					b++;
					matriz[i][j]=b;
				}
				b=0;
				e++;
			}
			//----------------------------------------
			e=n-1;
			m=n;;b=0;
			for(i=e;i>=0;i--){
						
				for (j=m-1;j>=0;j--){
					b++; 
						matriz[i][j]=b;
				}
				 	m--;	b=0;
			}
			for(i = 0 ; i < n ; i++){
				b++;
				for( j = 0 ; j < n ; j++ ){
					if(j>=0 && j<(n-1)){
						printf("%3d ",matriz[i][j]);
					}
					else{
						printf("%3d\n",matriz[i][j]);
					}
				}
				
			}
			printf("\n");
			
		}
	
	return 0;
}

