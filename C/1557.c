#include <stdio.h>

int main(){
	int i,j,b,t=0,n=1;
	while(n!=0){
		scanf("%d",&n);
		if(n==0)break;
		int mat[n][n];
		int a,f=0;
		t++;
		b=t;
		for(i=0;i<n;i++){
			b=2*t;
			for(j=0;j<n;j++){
				mat[i][j]=t;
				a=mat[i][j];
				t=t*2;
			}
			t=b;
		}
		//===========================================
		//int a=0;
		//===========================================
		if(a==0) f=1;
		else{
			while(a!=0){
				f++;	a=a/10;
			}
		}
		for(i=0;i<n;i++){
			//b=2*t;
			for(j=0;j<n;j++){
				if(j>=0 && j<(n-1)){
					printf("%*d ",f,mat[i][j]);
				}
				else{
					printf("%*d\n",f,mat[i][j]);
				}
			}
			//t=b;

		}
		a=0;f=0;
		//==========================================
		printf("\n");
		t=0;
		//==========================================
	}
	return 0;
}
