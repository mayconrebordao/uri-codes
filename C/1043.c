#include <stdio.h>
int main(){
	/*a+b > c
	  b+c > a
	  a+c > b*/
	  float  a,b,c,A;
	  scanf("%f %f %f",&a,&b,&c);
	  if ((a+b>c)&&(b+c>a)&& (a+c>b)){
		  A=a+b+c;
		  printf("Perimetro = %0.1f\n",A);
		  }
		 else {
			 printf("Area = %0.1f\n",((a+b)*c)/2);			 
			 }
	 return 0;
 }
