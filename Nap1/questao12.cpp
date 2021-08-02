#include <stdio.h>

int main(void){

int idade;
float peso;
char probCardi, sexo, gravida;

printf("Digite sua idade: ");
scanf("%d",&idade);
printf("Digite seu peso: ");
scanf("%f",&peso);

printf("Possui problema cardiaco ? S/N: ");
scanf(" %c",&probCardi);
printf("Digite seu sexo F/M: ");
scanf(" %c",&sexo);

if (idade >= 16 && idade <= 69){
  if (peso >= 50 && peso <= 100){
    if(probCardi == 'N' || probCardi == 'n'){
      if (sexo == 'M' || sexo == 'm'){
        printf("\n");
        printf("AUTORIZADO !!!");
      }
      if (sexo == 'F' || sexo == 'f'){
      printf("Esta gravida ? S/N: ");
      scanf(" %c",&gravida);

      if (gravida == 'N' || gravida == 'n'){
        printf("\n");
        printf("AUTORIZADO !!!");
      }
      else {
        printf("\n");
        printf("NAO AUTORIZADO");
      }
}
    }   else {
        printf("\n");
        printf("NAO AUTORIZADO !!!");
    }
    
  }
  else {
    printf("\n");
    printf("NAO AUTORIZADO !!!");
  }
} else {
   printf("\n");
  printf("NAO AUTORIZADO");
}

	
}
