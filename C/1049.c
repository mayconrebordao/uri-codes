#include <stdio.h>
#include <string.h>
int main(){
	const char *nom1 ="vertebrado";
	const char *nom2 ="ave";
	const char *nom3 ="carnivoro";
	const char *nom4 ="onivoro";
	const char *nom5 ="mamifero";
	const char *nom12 ="herbivoro";
	const char *nom7 = "invertebrado";
    const char *nom8 ="hematofago";
	const char *nom9 ="inseto";
	const char *nom10 ="anelideo";
	    char ani1[20],ani2[20],ani3[20];
/*strcmp(nome,ne)==0)*/
	scanf("%s %s %s",ani1,ani2,ani3);
    if(strcmp(ani1,nom1)==0 && strcmp(ani2,nom2)==0 &&strcmp(ani3,nom3)==0 ){
        printf("aguia\n");
    }
    if(strcmp(ani1,nom1)==0 && strcmp(ani2,nom2)==0 &&strcmp(ani3,nom4)==0){
        printf("pomba\n");
    }
    if(strcmp(ani1,nom1)==0 && strcmp(ani2,nom5)==0 &&strcmp(ani3,nom4)==0){
         printf("homem\n");
    }
    if(strcmp(ani1,nom1)==0 && strcmp(ani2,nom5)==0 &&strcmp(ani3,nom12)==0){
         printf("vaca\n");
    }
    if(strcmp(ani1,nom7)==0 && strcmp(ani2,nom9)==0 &&strcmp(ani3,nom8)==0){
         printf("pulga\n");
    }
    if(strcmp(ani1,nom7)==0 && strcmp(ani2,nom9)==0 &&strcmp(ani3,nom12)==0){
         printf("lagarta\n");
    }
    if(strcmp(ani1,nom7)==0 && strcmp(ani2,nom10)==0 && strcmp(ani3,nom8)==0){
         printf("sanguessuga\n");
    }
    else if(strcmp(ani1,nom7)==0 && strcmp(ani2,nom10)==0 &&strcmp(ani3,nom4)==0){
         printf("minhoca\n");
    }


	return 0;
}


