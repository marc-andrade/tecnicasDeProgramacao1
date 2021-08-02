#include <stdio.h>


int main(void){
	// VD = valor devido , QP = quantidade de parcelas, VP = quantidade de parcelas com juros;

	float VD,VP;
	int QP;
	
	printf("Digite o valor devido: ");
	scanf("%f",&VD);
	printf("Digite a quantidade de parcelas: ");
	scanf("%f",&QP);
	
		if (QP >= 1 && QP <=4){
		VD += (VD * 0.04);
		VP = VD / QP;
	}
	
		if (QP >= 5 && QP <=7){
		VD += (VD * 0.068);
		VP = VD / QP;
	
	}
	
		if (QP >= 8 && QP <=10){
		VD += (VD * 0.072);
		VP = VD / QP;
		
	}
	
	printf("\n");
	printf("O valor de cada parcela e %.2f \n",VP);
	printf("O valor total da divida e %.2f,",VD);
	
}
