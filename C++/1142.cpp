#include <iostream>
using namespace std;

int main(){
    int x,n=0,p1=0,p2=0,p3=1;
    cin>>x;

    while (n<x){
        n++;
        p1=p3+1;
        p2=p3+2;
        cout<<p3<<" "<<p1<<" "<<p2<<" PUM"<<endl;
        p3+=4;

    }
return 0;
}
