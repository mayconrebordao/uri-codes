#include <iostream>
using namespace std;

int main(){
    int x,n,p1,p2;
    cin>>x;
    for(n=1;n<=x;n++){
        p1=(n*n);
        p2=p1*n;
        cout<<n<<" "<<p1<<" "<<p2<<endl;
    }
return 0;
}
