#include<stdio.h>
#include<math.h>
int main(){
    int num,digits=0,sum=0,a,num2,num3;
    printf("Enter a number :");
    scanf("%d",&num);
    num2=num3=num;
     
    while(num>0){
        num/=10;
        digits++;
    }

    while(num2>0){
        a=num2%10;
        sum+=pow(a,digits);
        num2/=10;
    }
  
    (num3==sum)?printf("The number is armstrong.") : printf("The number is not armstrong.");
    return 0;
}