#include<stdio.h>
int main(){
    int amount,notes10,notes50,notes100;
    printf("Enter the amount :");
    scanf("%d",&amount);
    notes100=amount/100;
    notes50=(amount%100)/50;
    notes10=(amount%50)/10;
    printf("The number of notes of 100 is : %d\n",notes100);
    printf("The number of notes of 50 is : %d\n",notes50);
    printf("The number of notes of 10 is : %d\n",notes10);

    return 0;
}