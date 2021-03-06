#include <stdio.h>
/*Escreva um programa que leia três valores com ponto flutuante de dupla precisão: A, B e C. Em seguida, calcule e mostre: 
a) a área do triângulo retângulo que tem A por base e C por altura. 
b) a área do círculo de raio C. (pi = 3.14159) 
c) a área do trapézio que tem A e B por bases e C por altura. 
d) a área do quadrado que tem lado B. 
e) a área do retângulo que tem lados A e B. 
Entrada

O arquivo de entrada contém três valores com um dígito após o ponto decimal.

Saída

O arquivo de saída deverá conter 5 linhas de dados. Cada linha corresponde a uma das áreas descritas acima, sempre com mensagem correspondente e um espaço entre os dois pontos e o valor. O valor calculado deve ser apresentado com 3 dígitos após o ponto decimal.

Exemplos de Entrada	Exemplos de Saída
3.0 4.0 5.2
TRIANGULO: 7.800
CIRCULO: 84.949
TRAPEZIO: 18.200
QUADRADO: 16.000
RETANGULO: 12.000
12.7 10.4 15.2*/

int main(){
	double pi,A,B,C;
	scanf("%lf",&A);
	scanf("%lf",&B);
	scanf("%lf",&C);
	pi=3.14159;
	printf("TRIANGULO: %0.3lf\n",(A*C)/2);
	printf("CIRCULO: %0.3lf\n",(C*C)*pi);
	printf("TRAPEZIO: %0.3lf\n",((A+B)*C)/2);
	printf("QUADRADO: %0.3lf\n",B*B);
	printf("RETANGULO: %0.3lf\n",A*B);
	  
	return 0;
}