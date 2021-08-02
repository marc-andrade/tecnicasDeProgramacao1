#include <stdio.h>

void moda(float v[]){
	int T = 10; //tamanho do vetor
	int i, j, cont[T];
	float conta, moda;
	
	for(i=0;i<T;i++){
        for(j=i+1;j<T;j++){
        	
			if(v[i]==v[j]){
				cont[i]++;
					if(cont[i]>conta){
						conta=cont[i];
						moda=v[i];
					}
			}

        }
        cont[i]=0;
    }
    if(conta == 0){
    	printf("Nao existe moda\n");
	}
	else{
		printf("Moda: %.2f\n", moda);
	}

}
