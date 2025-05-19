#include<stdio.h>
int main(){
    float temp_farhenheit,temp_centigrade;
    printf("Enter the temperature of the city in ferhenheit :");
    scanf("%f",&temp_farhenheit);
    temp_centigrade=((temp_farhenheit-32.0)*5.0)/9.0;
    printf("The temperature of the city in centigrade is : %f",temp_centigrade);
    return 0;
}
