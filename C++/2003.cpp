#include <iostream>
using namespace std;
int main(){
	int i,j,m=0;
	char a;
	const char *b="Atraso maximo: ";
	while(cin>>i>>a>>j){
		
		m=(((i*60)-480)+60)+j;
		if(m<0){
			cout<<b<<0<<endl;
		}
		else {
			cout<<b<<m<<endl;
		}
		m=0;	
	}
	return 0;
}


