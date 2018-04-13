#include <stdio.h>
#include <math.h>

int main(){
	char nom1[20],nom2[20],a1[5],a2[5];

    int d1=0,d2=0,h1=0,h2=0,m1=0,m2=0,s1=0,s2=0;
    scanf("%s %d",nom1,&d1);
    scanf("%d %s %d %s %d",&h1,a1,&m1,a2,&s1);
    scanf("%s %d",nom2,&d2);
    scanf("%d %s %d %s %d",&h2,a1,&m2,a2,&s2);
    int m=0,s=0,h=0,d=0;
    d=d2-d1;
    if(h2<h1){
		d--;
		h2+=24;
	}
	h=h2-h1;
	if(m2<m1){
		h--;
		m2+=60;
	}
	m=m2-m1;
	if(s2<s1){
		m--;
		s2+=60;
	}
	s=s2-s1;	

    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",d,h,m,s);
	return 0;
}

