#include<stdio.h>
#include<math.h>
int check_prime(int num){
    int i,a=0;
    for(i=1;i<=num;i++){
        if(num%i==0) a++;
    }
    if(a<=2) return 1 ;
    else return 0;
}
int main(){
    int i;
    printf("The all prime numbers between 1 & 100 are :\n");
    for(i=1;i<=100;i++){
        if(check_prime(i)==1) printf("%d\n",i);
    }
    return 0;
}