#include <stdio.h>

int main(void){
	
	float notaFinal = 0;
	int faltas = 0;
	
	printf("Digite a nota final do aluno: ");
	scanf("%f",&notaFinal);
	
	printf("Digite a quantidade de faltas: ");
	scanf("%d",&faltas);
	
	//condição de 9 até 10
	if (notaFinal >= 9 && notaFinal <=10){
		
		if(faltas <= 6 ){
			printf("\n");
			printf("Seu conceito e A");
		}
		
		if(faltas > 6 && faltas <= 15 ){
			printf("\n");
			printf("Seu conceito e B");
		}
		
		if(faltas >= 15) {
			printf("\n");
			printf("Seu conceito e C");
		}	
	}
 //condição de 7.5 até 8.9
	if (notaFinal >= 7.5 && notaFinal <= 8.9){
		
		if(faltas <= 6 ){
			printf("\n");
			printf("Seu conceito e B");
		}
		
		if(faltas > 6 && faltas <= 15 ){
			printf("\n");
			printf("Seu conceito e C");
		}
		
		if(faltas >= 15) {
			printf("\n");
			printf("Seu conceito e D");
		}	
	}
	//condição de 5 até 7.4
	if (notaFinal >= 5 && notaFinal <= 7.4){
		
		if(faltas <= 6 ){
			printf("\n");
			printf("Seu conceito e C");
		}
		
		if(faltas > 6 && faltas <= 15 ){
			printf("\n");
			printf("Seu conceito e D");
		}
		
		if(faltas >= 15) {
			printf("\n");
			printf("Seu conceito e E");
		}	
	}
	//condição de 4.0 até 4.9
	if (notaFinal >= 4 && notaFinal <= 4.9){
		
		if(faltas <= 6 ){
			printf("\n");
			printf("Seu conceito e D");
		}
		
		if(faltas > 6 && faltas <= 15 ){
			printf("\n");
			printf("Seu conceito e D");
		}
		
		if(faltas >= 15) {
			printf("\n");
			printf("Seu conceito e E");
		}	
	}
		//condição de 0.0 até 3.9
	if (notaFinal >= 0.0 && notaFinal <= 3.9){
		
		if(faltas <= 6 ){
			printf("\n");
			printf("Seu conceito e D");
		}
		
		if(faltas > 6 && faltas <= 15 ){
			printf("\n");
			printf("Seu conceito e E");
		}
		
		if(faltas >= 15) {
			printf("\n");
			printf("Seu conceito e E");
		}	
	}
	

}
