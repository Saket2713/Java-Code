#include<stdio.h>

int main(){
    char str[100];
    int alphabets, digits, special,i;
    i=alphabets=digits=special=0;
    printf("Enter your name:");
    gets(str);
    while (str[i] != '\0'){
  	
  		if( (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') )
  		{
  			alphabets++;  	
 		}
  		else if (str[i] >= '0' && str[i] <= '9')
  		{
  			digits++;  	
  		}    
  		else{
    		special++;
        }    
        i++;
        }    
    

    printf("Total Alphabets:%d\n", alphabets);
    printf("Total Digits:%d\n", digits);
    printf("Total special characters:%d\n", special);
    return 0;

}


