#include <stdio.h>

int main(void){
	
	float salario;
	float reajuste;
	
	printf("Digite o salario atual: ");
	scanf("%f",&salario);
	
	printf("Digite o reajuste do salario em porcentagem: ");
	scanf("%f",&reajuste);
	
	salario += (salario *(reajuste/100));
	
	printf("\n");
	printf("O valor do salario reajustado e $%.2f",salario);
	
	
}
