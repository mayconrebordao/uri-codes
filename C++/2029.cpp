#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <stdlib.h>
using namespace std;
void mel(){
	double  a=0,b=0;
	while (scanf("%lf %lf",&a,&b)!=EOF){
		if(a == EOF){
			break;
		}
		
		double area = 3.14*((b/2)*(b/2));
		double altura =a /(area);
		cout<<fixed<<setprecision(2)<<"ALTURA = "<<altura<<endl;
		cout<<fixed<<setprecision(2)<<"AREA = "<<area<<endl;
		a=0,b=0;
		altura=0;	area=0;
	}
}
int main(){
	mel();
	return 0;
}
