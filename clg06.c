#include<stdio.h>
int main(){
     
        int num1, num2, num3;
        int max, min;
    
        printf("Enter first number: ");
        scanf("%d", &num1);
    
        printf("Enter second number: ");
        scanf("%d", &num2);
    
        printf("Enter third number: ");
        scanf("%d", &num3);
    
        // Assume num1 is max and min
        max = min = num1;
    
        if (num2 > max)
            max = num2;
        if (num3 > max)
            max = num3;
    
        if (num2 < min)
            min = num2;
        if (num3 < min)
            min = num3;
    
        printf("The maximum number is: %d\n", max);
        printf("The minimum number is: %d\n", min);
    
     
    
    return 0;
}
