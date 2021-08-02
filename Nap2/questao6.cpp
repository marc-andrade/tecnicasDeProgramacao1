#include <stdio.h>


int main (void){
	
	float base, expoente,resultado=1;
	
	printf("Digite a base: ");
	scanf("%f", &base);
	printf("Digite o expoente: ");
	scanf("%f", &expoente);
	
	for (int i = 0; i< expoente;i++){
		 resultado *= base ;
	}
	
	printf("%.2f", resultado);
	
	return 0;
}
