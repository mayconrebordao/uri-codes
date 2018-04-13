#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double in=0,fim=0,soma1,soma2;

    cin>>in;    cin>>fim;
    soma1=((fim-in)/in)*100;
    cout<<fixed<<setprecision(2)<<soma1<<"%"<<endl;
    return 0;

}
