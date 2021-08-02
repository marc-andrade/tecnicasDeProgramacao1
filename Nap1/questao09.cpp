#include <stdio.h>
#include <math.h>

int main(void){
	
	int A,B,quadrado;
	
	printf("Digite o valor de A: ");
	scanf("%d",&A);
	printf("Digite o valor de B: ");
	scanf("%d",&B);
	
	quadrado = pow ((A+B),2);
	
	printf("O Quadrado da soma e %d. ",quadrado);
	
}
