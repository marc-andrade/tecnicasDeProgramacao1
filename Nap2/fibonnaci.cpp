#include <stdio.h>


int main (void){

    int a, b, aux, i, n;

    a = 0;
    b = 1;

    
    printf("\n Serie de Fibonacci:\n");
    printf("%d, ", b);

    for(i = 0; i < 100; i++) {

        aux = a + b;
        a = b;
        b = aux;

        printf("%d, ", aux);
    }
}

