//Activity 1
#include <stdio.h>
int main() {
   int n;
   printf("Enter number: ");
   scanf("%d", &n);
   for(int i = 1; i <= n; i++) {
      printf("%d\n", i);
   }
   for(int i = (n - 1); i >= 1; i--) {
      printf("%d\n", i);
   }
  return 0;  
}
