#include <stdio.h>

int mode(int a[],int n) {
   int maxValue = 0, maxCount = 0, i, j;

   for (i = 0; i < n; ++i) {
      int count = 0;
      
      for (j = 0; j < n; ++j) {
         if (a[j] == a[i])
         ++count;
      }
      
      if (count > maxCount) {
         maxCount = count;
         maxValue = a[i];
      }
   }

   return maxValue;
}

int main() {
   int n = 0, t=0,i;
   int a[i];

   for ( i = 0; t!=-1; i++){
     printf("Digite um numero: ");
     scanf("%d",&t);
     if(t>=0 && t<=10){
       a[i]=t;
     }

   } 
   printf("Mode = %d ", mode(a,n));

   return 0;
}
