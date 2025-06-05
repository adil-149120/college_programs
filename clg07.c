#include<stdio.h>

void print(int num,float avg){
    if(num>avg) printf("%d is above average .\n",num);
    else if(num<avg) printf("%d is below average .\n",num);
    else printf("%d is equal to the average .\n",num);
}

int main(){
    int num1,num2,num3;
    float avg;

    printf("Enter first number :");
    scanf("%d",&num1);
    printf("Enter second number :");
    scanf("%d",&num2);
    printf("Enter third number :");
    scanf("%d",&num3);

    avg=(num1+num2+num3)/3.0;

    printf("The average of the 3 numbers is : %f\n",avg);
    print(num1,avg);
    print(num2,avg);
    print(num3,avg);

    return 0;
}