#include<stdio.h>
#include<math.h>

long long int decimal_octal(double f_decimal){
    int r,i=0;
    long long int octal=0,decimal;
    decimal=(long long int)f_decimal;
    while(decimal>0){
        r=decimal%8;
        decimal/=8;
        octal+=r*pow(10,i);
        i++;
    }
    return octal;
}

int main(){
    int  octal=0,r,i=0;
    double f_decimal;
    long long int octal2;

    printf("Enter a decimal number :");
    scanf("%lf",&f_decimal);
    double d=f_decimal-(long long int)f_decimal;
    
    if(d==0){
        printf("The equivalent octal number is :%lld\n",decimal_octal(f_decimal));
    }
    else{
        double d1=d*pow(8,8);
        long long int d2=(long long int )d1;
        double d3=(double)d2;
        double d4=decimal_octal(d3)/100000000.0;
        double octal3=decimal_octal(f_decimal)+d4;
        printf("The equivalent octal number is :%lf\n",octal3);
    }
    return 0;
}