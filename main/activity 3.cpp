//Activity 3
#include <stdio.h>
int main() {
    int n1, n2, sum;
   printf("Enter 1st term: ");
   scanf("%d", &n1);
   printf("Enter 2nd term: ");
   scanf("%d", &n2);
   sum = 2 + (n1 + n2);
   printf("\nThe sum is: %d", sum);
   printf("\nThe remainder is: %d",  (sum % 5)); 
   return 0;
}
