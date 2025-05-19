#include<stdio.h>
#include<math.h>
int main(){
    int num,rev=0,a,digits;
    printf("Enter a number :");
    scanf("%d",&num);
    digits=log10(num)+1;
    while(num>0){
        a=num%10;
        rev+=a*pow(10,digits-1);
        digits--;
        num/=10;
    }
    printf("The reversed number is %d",rev);

    return 0;
}