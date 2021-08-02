#include <stdio.h>


int main(void){
	
	int horas = 0,minutos = 0,segundos =0,segInicial = 0;
	
	printf("Digite o tempo em segundos: ");
	scanf("%d",&segInicial);
	
	horas = segInicial / 3600;
	minutos = (segInicial % 3600) / 60;
	segundos = (segInicial % 60) ;
	
	printf("\n");
	printf("O tempo e %d Horas, %d Minutos e %d Segundos", horas, minutos,segundos);
}
