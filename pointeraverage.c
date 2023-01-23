#include<stdio.h>
float avg(int x[100],int n){
int *p=x;
int sum=0;
for(int i=0;i<n;i++){
    scanf("%d",&x[i]);
sum=sum + *(p+i);
}
float avg=sum/n;
return avg;
}
int main(){
int x[100],n;
printf("enter size\n");
scanf("%d",&n);
printf("enter %d elements\n",n);
printf("average = %f\n",avg(x,n));
 return 0;
}
