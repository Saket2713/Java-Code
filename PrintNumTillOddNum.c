#include <stdio.h>
int main() {
  int num;
  printf("Enter a number:");
  scanf("%d", &num);
  while (num != 0) {
    if (num % 2 == 0) {
      printf("Enter a number");
      scanf("%d", &num);
    } else if (num % 2 != 0) {
      printf("You entered odd number");
      break;
    }
  }
  return 0;
}