#include<stdio.h>
#include<math.h>

int check_armstrong(int num){
    int a,digits=0,sum=0,num1;
    num1=num;
    digits = log10(num)  + 1;

     
    while(num>0){
        a=num%10;
        sum+=pow(a,digits);
        num/=10;
    }
    if(sum==num1) return 1;
    else return 0;
}

int main(){
    int i;
    printf("The armstrong numbers between 1 to 500 are here :\n");
    for(i=1;i<=500;i++){
        if(check_armstrong(i)==1) printf("%d\n",i);
    }

    return 0;
}