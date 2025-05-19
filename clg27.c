#include<stdio.h>

int is_fibonacci(int num){
    if(num==1) return 0;
    else if(num==2) return 1;
    else return is_fibonacci(num-1)+is_fibonacci(num-2);
}

int main(){
    int num,i;
    printf("Enter an integer :");
    scanf("%d",&num);
    printf("The fibonacci sequence upto %d terms is here :\n",num);
    for(i=1;i<=num;i++){
        printf("%d\n",is_fibonacci(i));
    }
    return 0;
}