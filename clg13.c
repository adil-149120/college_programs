#include<stdio.h>
int main(){
    int marks[5],i,aggregate=0;
    for(i=0;i<5;i++){
        printf("Enter marks%d :",i+1);
        scanf("%d",&marks[i]);
        if(marks[i]>100 || marks[i]<0){
            printf("please enter a valid marks.\n");
            printf("Enter marks%d :",i+1);
            scanf("%d",&marks[i]);
        }
    }
    for(i=0;i<5;i++){
        aggregate+=marks[i];

    }
    printf("The aggregate marks is %d and the percentage is %f .",aggregate,(aggregate/5.0));

     
    return 0;
}