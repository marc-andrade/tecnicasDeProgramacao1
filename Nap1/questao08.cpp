#include <stdio.h>
#include <math.h>//necess�ria para usar as fun��es matem�ticas

int main(void){
	
	int valor,quadrado,cubo;
	
	printf("Digite o valor: ");
	scanf("%d",&valor);
	
	quadrado = pow (valor,2);
	cubo = pow (valor,3);
	
	printf("O Quadrado do valor e %d, o cubo e %d. ",quadrado,cubo);
	
}
