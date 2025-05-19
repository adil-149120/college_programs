#include<stdio.h>
#include<math.h>
int main(){
    int num,sum=0,i;
    printf("Enter a number :");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        sum+=i;
    }
    printf("The sum of the series S=1+2+...+n where n is %d is : %d",num,sum);
    return 0;
}