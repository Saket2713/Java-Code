#include<stdio.h>
int main(){
	int start,end,i,j,flag;
	printf("Enetr lower interval:");
	scanf("%d", &start);
	printf("Enter upper interval:");
	scanf("%d", &end);
	for(i=start; i<=end; i++){
		if(i==1 || i==0){
			continue;
		}
		flag=1;
		for(j=2; j<=i; j++){
			if(i%j==0){
				flag=0;
				break;
			}
		}
		if(flag==1){
			printf("%d ", i);
		}
	}
	return 0;
}




































