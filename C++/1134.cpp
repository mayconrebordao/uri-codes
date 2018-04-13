#include <iostream>
using namespace std;

int main() {
    int x,n=0,p1=0,p2=0,p3=1;
    int alc=0,gas=0,die=0;
    while (n!=4){
        cin>>n;
        while(n<1 || n>4) {
            cin>>n;
        }
        if(n==1) {
            alc+=1;
        }
        if(n==2) {
            gas+=1;
        }
        if(n==3) {
            die+=1;
        }
    }
    cout<<"MUITO OBRIGADO"<<endl;
    cout<<"Alcool: "<<alc<<endl;
    cout<<"Gasolina: "<<gas<<endl;
    cout<<"Diesel: "<<die<<endl;
    return 0;
}
