#include <stdio.h>
#include <string.h>
void printNamaste();
void printBonjour();
int main() {
  char country[40];
  printf("Enter Your Coutry Name (India/French):");
  scanf("%s", country);
  if (strcmp(country, "india") == 0) {
    printNamaste();
  } else if (strcmp(country, "french") == 0) {
    printBonjour();
  }
  return 0;
}
void printNamaste() { printf("Namaste\n"); }
void printBonjour() { printf("Bonjour\n"); }  