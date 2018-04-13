#include <stdio.h>
int main(){
	int gre=0,in=0,op=0,gren=0,emp=0,coni=0,cone=0;

    while (op<2){

		scanf("%d %d",&in,&gre);

        	if(in>gre){
			coni+=1;
		}
		if(in<gre){
			cone+=1;
		}
		if(in==gre){
			emp+=1;
		}
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d",&op);
        	gren+=1;

		}

	printf("%d grenais\n",gren);
	printf("Inter:%d\n",coni);
	printf("Gremio:%d\n",cone);
	printf("Empates:%d\n",emp);
	if(coni>cone){
		printf("Inter venceu mais\n");
	}
	else if(cone>coni){
		printf("Gremio venceu mais\n");
	}
	else if(coni==cone){
		printf("Nao houve vencedor\n");
	}

    return 0;
}