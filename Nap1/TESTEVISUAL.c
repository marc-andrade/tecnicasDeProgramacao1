#include <stdio.h>


int main (void){

    int a, b, auxiliar, i, n;

    a = 0;
    b = 1;

    printf("Digite um número: ");
    scanf("%d", &n);
    printf("\nSérie de Fibonacci:\n\n");
    printf("%d\n", b);

    for(i = 0; i < n; i++) {

        auxiliar = a + b;
        a = b;
        b = auxiliar;

        printf("%d\n", auxiliar);
    }
}
