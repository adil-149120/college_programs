#include<stdio.h>
#include<math.h>
int main(){
    int num,factors=0,i;
    printf("Enter a number :");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        if(num%i==0) factors++;
    }
    (factors<=2)?printf("The number is prime .\n"): printf("The number is not prime .\n");
    return 0;
}