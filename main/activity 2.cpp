//Activity 2
#include <stdio.h>
int main() {
    int n, sum;
   printf("Enter number: ");
   scanf("%d", &n);
   if(n % 2 != 0) {
       printf("\nOdd");
       for(int i = 1; i <= n; i++) {
          if(i % 2 != 0) sum += i;
        }
   } else {
     printf("\nEven"); 
     for(int i = 1; i <= n; i++) {
          if(i % 2 == 0) sum += i;
        }
   }
   printf("\nThe sum is: %d", sum);
   return 0;  
}
