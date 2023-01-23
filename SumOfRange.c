#include <stdio.h>
int main() {
  int sum = 0,num;
  printf("Enter n number:");
  scanf("%d", &num);
  for (int i = 1; i <= num; i++) {
    sum += i;
  }
  printf("The sum is:%d", sum);

  return 0;
}