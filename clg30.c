#include<stdio.h>
int main(){
    int num,i=1,sum=0;
    printf("Enter a perfect square natural number :");
    scanf("%d",&num);
    while(i>=1){
        sum+=(2*(i)-1);
        if(sum==num){
            printf("The square root of %d is : %d.",num,i);
            break;
        }   
        else i++;
    }
    return 0;
}