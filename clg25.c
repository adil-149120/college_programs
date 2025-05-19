#include<stdio.h>
int factorial(int num){
    if(num==1 || num==0) return 1;
    else return num*factorial(num-1);
}
int main(){
    int num,i,sum=0;
    printf("Enter a number :");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        sum+=factorial(i);
    }
    printf("The sumation of the series S=1!+2!+...+n! where n=%d is: %d",num,sum);

    return 0;
}