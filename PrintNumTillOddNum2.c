#include <stdio.h>
int main() {
  int a;
  printf("Enter numbers: \n");
  do {
    scanf("%d", &a);
    printf("%d\n", a);

    if (a % 2 != 0) {
      break;
    }

  } while (1);
  printf("You entered odd number");
  return 0;
}