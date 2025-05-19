#include<stdio.h>
int main(){
    int year;
    printf("Enter any year :");
    scanf("%d",&year);
    if(year%100==0 && year%400==0){printf("The year is leap year .\n");}
    else if(year%100!=0 && year%4==0){printf("The year is leap year .\n");}
    else {printf("The year is not leap year .\n");}

    
    return 0;
}