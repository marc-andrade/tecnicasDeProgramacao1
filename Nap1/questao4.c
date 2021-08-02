#include <stdio.h>

int main(void){
	
	int idade,mes,dia;
	
	printf("Digite a sua idade: ");
	scanf("%d",&idade);
	
	printf("Digite o mes atual do ano: ");
	scanf("%d",&mes);
	
	printf("Digite o dia atual do mes: ");
	scanf("%d",&dia);
	
	dia += (idade*365) + (mes*30);

	printf("\n");
	printf("A idade em dia e %d",dia);
	
	
}
