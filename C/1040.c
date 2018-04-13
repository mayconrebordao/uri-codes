#include <stdio.h>
int main(){

    double media,exame,n1,n2,n3,n4;

    scanf("%lf %lf %lf %lf",&n1,&n2,&n3,&n4);

    media=((n1 * 2 )+(n2 * 3 )+ (n3 * 4) +( n4*1))/10;
    printf("Media: %0.1lf\n",media);

    if(media>=7.0){
        printf("Aluno aprovado.\n");
    }
    if(media<5.0){
        printf("Aluno reprovado.\n");
    }
    if((media >=5.0) && (media<=6.9)){
        printf("Aluno em exame.\n");
        scanf("%lf",&exame);
        printf("Nota do exame: %0.1lf\n",exame);

        if(((exame+media)/2.0) >=5.0){
            printf("Aluno aprovado.\n");
            printf("Media final: %0.1lf\n",((exame+media)/2.0));
        }
        else if(((exame+media)/2.0)<=4.9){
            printf("Aluno reprovado.\n");
            printf("Media final: %0.1lf\n",((exame+media)/2.0));
        }
    }

    return 0;
}
