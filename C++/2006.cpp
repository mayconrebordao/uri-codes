#include <iostream>
using namespace std;
int main(){
	int i,m,n,cont=0;
	cin>>n;
	for(i=0;i<5;i++){
		cin>>m;
		if(n==m){
			cont++;
		}
		m=0;
	}
	cout<<cont<<endl;
	return 0;
}

