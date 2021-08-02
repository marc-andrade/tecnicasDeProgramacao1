#include <stdio.h>


int main (void){
	
	float dist,imposto,custoFab,custoConsu;
	
	printf("Digite o valor do custo de fabricacao:");
	scanf("%f",&custoFab);
	
	dist = custoFab * 0.28;
	imposto = custoFab * 0.45; 
	custoConsu = custoFab + dist + imposto;
	
	printf("\n");
	printf("O custo do consumidor e %.2f.",custoConsu);
	
}
