#include <stdio.h>
int main() {
  long int a, factorial = 1;

  printf("Enter a number for factorial:");
  scanf("%d", &a);
  for (int i = 1; i <= a; i++) {
    if (a == 0) {
      printf("Factorial of 0 is:1");
      break;
    } else if (a != 0) {
      factorial = factorial * i;
    }
  }
  printf("The factorial of %d is: %d", a, factorial);
  return 0;
}