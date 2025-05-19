#include<stdio.h>
#include<math.h>
int factorial(int num){
    if(num==1 || num==0) return 1;
    else return num*factorial(num-1);
}
int main(){
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    printf("%d ! = %d",num,factorial(num));

    return 0;
}