#include<stdio.h>
int main(){
    float base_salary,gross_salary,dearness_allowance,house_allowance;
    printf("Enter your base salary :");
    scanf("%f",&base_salary);
    dearness_allowance=(base_salary*60.0)/100.0;
    house_allowance=(base_salary*15.0)/100.0;
    gross_salary=base_salary+dearness_allowance+house_allowance;
    printf("Your gross salary is : %f",gross_salary);
    return 0;
}