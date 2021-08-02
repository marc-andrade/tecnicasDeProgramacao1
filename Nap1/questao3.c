#include <stdio.h>

int main(void){
	
	int a,b,c;
	
	printf("Digite o valor de A: ");
	scanf("%d",&a);
	
	printf("Digite o valor de B: ");
	scanf("%d",&b);
	
	c = a;
	a = b;
	b = c;
	
	
	printf("\n");
	printf("Os valores trocados sao A =%d, B =%d",a,b);
	
	
}
