#include<stdio.h>
int main(){
    int i_seconds,hours,minutes,seconds;
    printf("Enter time interms of seconds :");
    scanf("%d",&i_seconds);
    hours=i_seconds/3600;
    minutes=(i_seconds%3600)/60;
    seconds=(i_seconds%60);
    printf("%d seconds is equivalent to %d hours %d minutes %d seconds.",i_seconds,hours,minutes,seconds);
    return 0;
}