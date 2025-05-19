#include<stdio.h>
#include<math.h>
int main(){
    int num,digits,sum=0,a;
    printf("Enter a number :");
    scanf("%d",&num);
    digits=log10(num)+1;
    while(num>0){
        a=num%10;
        sum+=a;
        num/=10;
    }
    printf("The sumation of the digits of the number is : %d",sum);
    return 0;
}