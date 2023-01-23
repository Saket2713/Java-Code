#include<stdio.h>
int main(){
    char sentence[100000];
    printf("Enter a sentence:");
    gets(sentence);
    printf("The sentence is:");
    puts(sentence);
    return 0;
}