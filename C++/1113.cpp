#include <iostream>
using namespace std;

int main(){
   int x,y;
   
    while (x!=y){		
		cin>>x;
		cin>>y;
		if(x>y){
			cout<<"Decrescente"<<endl;		
		}
		if(x<y){
			cout<<"Crescente"<<endl;
		}	
		
	}
    return 0;
}
