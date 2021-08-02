#include <stdio.h>


int main (void) {

	int n,moda,aux;
	int cont,cont1,cont2,cont3,cont4,cont5,cont6,cont7,cont8,cont9,cont10;
	
	while ( n != -1)  {
		
		printf("Digite um numero: ");
		scanf("%d",&n);
		
		if (n == 0){
			cont++;
		}
		if (n == 1){
			cont1++;
		}
		
		if (n == 2){
			cont2++;
		}
		
		if (n == 3){
			cont3++;
		}
		
		if (n == 4){
			cont4++;
		}
		if (n == 5){
			cont5++;
		}
		if (n == 6){
			cont6++;
		}
		if (n == 7){
			cont7++;
		}
		if (n == 8){
			cont8++;
		}
		if (n == 9){
			cont9++;
		}
		if (n == 10){
			cont10++;
		}	
	}
	
		if((cont>cont1) && (cont>cont2) && (cont>cont3) && (cont>cont4) && (cont>cont5) && (cont>cont6) && (cont>cont7) && (cont>cont8) && (cont>cont9) && (cont>cont10)){
			moda == 0;
		} 
		if(cont1>cont && cont1>cont2 && cont1>cont3 && cont1>cont4 && cont1>cont5 && cont1>cont6 && cont1>cont7 && cont1>cont8 && cont1>cont9 && cont1>cont10){
			moda == 1;
		} 
		if(cont2>cont && cont2>cont1 && cont2>cont3 && cont2>cont4 && cont2>cont5 && cont2>cont6 && cont2>cont7 && cont2>cont8 && cont2>cont9 && cont2>cont10){
			moda == 2;
		} 
		if(cont3>cont && cont3>cont1 && cont3>cont2 && cont3>cont4 && cont3>cont5 && cont3>cont6 && cont3>cont7 && cont3>cont8 && cont3>cont9 && cont3>cont10){
			moda == 3;
		} 
		if(cont4>cont && cont4>cont1 && cont4>cont2 && cont4>cont3 && cont4>cont5 && cont4>cont6 && cont4>cont7 && cont4>cont8 && cont4>cont9 && cont4>cont10){
			moda == 4;
		} 
		if(cont5>cont && cont5>cont1 && cont5>cont2 && cont5>cont3 && cont5>cont4 && cont5>cont6 && cont5>cont7 && cont5>cont8 && cont5>cont9 && cont5>cont10){
			moda == 5;
		} 
		if(cont6>cont && cont6>cont1 && cont6>cont2 && cont6>cont3 && cont6>cont4 && cont6>cont5 && cont6>cont7 && cont6>cont8 && cont6>cont9 && cont6>cont10){
			moda == 6;
		} 
		if(cont7>cont && cont7>cont1 && cont7>cont2 && cont7>cont3 && cont7>cont4 && cont7>cont5 && cont7>cont6 && cont7>cont8 && cont7>cont9 && cont7>cont10){
			moda == 7;
		} 
		if(cont8>cont && cont8>cont1 && cont8>cont2 && cont8>cont3 && cont8>cont4 && cont8>cont5 && cont8>cont6 && cont8>cont7 && cont8>cont9 && cont7>cont10){
			moda == 8;
		} 
		if(cont9>cont && cont9>cont1 && cont9>cont2 && cont9>cont3 && cont9>cont4 && cont9>cont5 && cont9>cont6 && cont9>cont7 && cont9>cont8 && cont7>cont10){
			moda == 9;
		}
		if(cont10>cont && cont10>cont1 && cont10>cont2 && cont10>cont3 && cont10>cont4 && cont10>cont5 && cont10>cont6 && cont10>cont7 && cont10>cont8 && cont10>cont9){
			moda == 10;
		} 
				
		printf("A moda e: %d",moda);
	
		


}

