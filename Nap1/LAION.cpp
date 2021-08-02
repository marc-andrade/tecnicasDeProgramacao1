#include <stdio.h>

int main(void) {
    
int idade;
float peso;
char pc, sexo, gest;

printf("Digite sua idade:\n");
scanf("%d", &idade);

printf("Quanto voce pesa?\n");
scanf("%f", &peso);

printf("Voce tem problemas cardiacos? [S/N]\n");
scanf(" %c", &pc);

printf("Qual o seu sexo? [M/F]\n");
scanf(" %c", &sexo);

if (idade >= 16 && idade <= 69){
    if (peso >= 50 && peso <= 100){
        if (pc == 'N'){
            if (sexo == 'M'){
                printf("Autorizado!");
            }
            if (sexo == 'F'){
                printf("Voce esta gestante? [S/N]\n");
                scanf(" %c", &gest);
            }
            if (gest == 'N'){
                printf("Autorizado!");
            } else {
                printf("Nao autorizado!");
            }
        } else {
            printf("Nao autorizado!");
        }
    } else {
        printf("Nao autorizado!");
    }
} else {
    printf("Nao autorizado!");
}

    return 0;
}
