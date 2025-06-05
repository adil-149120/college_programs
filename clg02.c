#include<stdio.h>
int max(int a,int b){
    return (a>b)?a:b;
}
int min(int a,int b){
    return (a>b)?b:a;
}

int gcd(int a,int b){
    int c,d,e;
    c=min(a,b);
    d=max(a,b); 
    do{
        e=d%c;
        d=c;
        c=e;
    }while(e>0);

    return d;    
}


int main(){
    int num1,num2,maximum,minimum;
    float result;
    printf("Enter first number :");
    scanf("%d",&num1);
    printf("Enter second number :");
    scanf("%d",&num2);
    maximum=max(num1,num2);
    minimum=min(num1,num2);
    result=(maximum+0.0)/minimum;
    printf("%d divided by %d shall yield %d/%d and %f respectively.",maximum,minimum,(maximum%minimum)/gcd(maximum,minimum),minimum/gcd(maximum,minimum),result);
    return 0;
}
