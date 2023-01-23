#include <stdio.h>
int main() {
  int num, mul;
  printf("Enter a number:");
  scanf("%d", &num);
  for (int i = 10; i >= 1; i--) {
    mul = num * i;
    printf("%d\n", mul);
  }

  return 0;
}