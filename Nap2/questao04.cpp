#include <stdio.h>


int main (void){
	
	float idade,i21,i50;

	while ( idade != -99){
		
		printf("Digite a idade: ");
		scanf("%f",&idade);
		
		if (idade > 0 && idade < 21){
			i21 ++;
		}	
		if (idade > 50)	{
			i50++; 
		}		
	}
	
	printf ("Total com menos de 21: %d \n",i21);
	printf ("Total com mais de 50: %d",i50);

	
	
}
