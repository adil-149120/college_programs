#include<stdio.h>
int main(){
    int num,i,j,k;
    printf("Enter a number :");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        k=1;
        for(j=1;j<=num;j++){
            if(j<=num-i) printf(" ");
            else {
                printf("%d",k);
                k++;
            }
        }
        printf("\n");

    }
    return 0;
}