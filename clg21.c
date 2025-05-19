#include<stdio.h>
#include<math.h>

float point(int a ){
    int b=a,c=0;
    while(a>0){
        a/=10;
        c++;
    }
    float d=b*pow(10,(-1*c));
    return d;

}
int main(){
    int num,i;
    float sum=0;
    printf("Enter a numer :");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        sum+=i+point(i+1);
    }
    printf("The sumation of the series  S=1.2+2.3+...+n(n+1) where n is %d is : %f",num,sum);
    return 0;
}