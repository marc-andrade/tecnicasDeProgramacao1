#include <stdio.h>


int main(void){
	
	// HT = horas trabalhadas no mês
	// VH = valor hora trabalhada
	// PD = percentual de desconto
	// SB = salário bruto 
	// TD = total de desconto 
	// SL = salário líquido 
	
	float HT,VH,PD,SB,TD,SL; 
	
	printf("Digite a quantidade de horas trabalhadas: ");
	scanf("%f",&HT);
	
	printf("Digite o valor/preco de horas trabalhadas: ");
	scanf("%f",&VH);
	printf("Digite o valor do percentual de desconto: ");
	scanf("%f",&PD);
	
	SB = HT * VH;
	TD = (PD/100)*SB;
	SL = SB - TD;
	
	printf("\n");
	printf("Horas trabalhadas:%.2f, Salario Bruto:%.2f, Desconto:%.2f, Salario Liquido:%.2f",HT,SB,TD,SL);
	printf("\n");
	
	
	
}
