#include<stdio.h>
int main(){
    int val1,val2,val3;
    printf("Enter first value :");
    scanf("%d",&val1); 
    printf("Enter second value :");
    scanf("%d",&val2);
    val3=val1;
    val1=val2;
    val2=val3;
    printf("After swapping The first value is : %d & the second value is : %d ",val1,val2);


    return 0;
}