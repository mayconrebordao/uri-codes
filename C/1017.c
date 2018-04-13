#include <stdio.h>
int main(){
	int velo,horas;
	float m;
	scanf("%d",&horas);
	scanf("%d",&velo);
	m=(horas*velo);
	printf("%0.3f\n",m/12);
	return 0;
}
