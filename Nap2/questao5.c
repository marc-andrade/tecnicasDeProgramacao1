#include <stdio.h>

int main(void){
	
	float tSegundos;
	float tempo;
	
	printf("Digite a valor do tempo da festa em segundos: ");
	scanf("%f",&tSegundos);
	
	tempo = tSegundos/3600;
	
	printf("\n");
	printf("O tempo de duração da festa foi %.4f",tempo);
	
	
}
