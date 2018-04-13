#include <iostream>
using namespace std;
int main(){
	int i,j,n,m,b=0;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>m;
		for(j=0;j<m;j++){
			if(j%2==0){
				b++;
			}
			else {
				b--;
			}
		}
		
		cout<<b<<endl;
		b=0;
	}
	return 0;
}
