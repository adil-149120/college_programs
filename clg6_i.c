#include<stdio.h>
int main(){
    //using nested if else
    int num1,num2,num3;
    printf("Enter first number :");
    scanf("%d",&num1);
    printf("Enter second number :");
    scanf("%d",&num2);
    printf("Enter third number :");
    scanf("%d",&num3);

    if(num1>num2){
        if(num1>num3){
            printf("The maximum number is : %d\n",num1);
            (num2>num3)?printf("The minimum number is : %d\n",num3):printf("The minimum number is : %d\n",num2) ;
        }
        else{
            printf("The maximum number is : %d\n",num3);
            printf("The minimum number is : %d\n",num2);
        }
    }
    else{
        if(num2>num3){
            printf("The maximum number is : %d\n",num2);
            (num1>num3)?printf("The minimum number is : %d\n",num3):printf("The minimum number is : %d\n",num1);
        }
        else{
            printf("The maximum number is : %d\n",num3);
            printf("The minimum number is : %d\n",num1);
        }
    }

    return 0;
}
