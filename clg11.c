#include<stdio.h>
int main(){
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    printf("all the integers between 1 to 100 which are divisible by %d are:\n",num);
    for(int i=1;i<=100;i++){
        if(i%num==0){printf("%d\n",i);}
    }
    return 0;
}