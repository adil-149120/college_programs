#include<stdio.h>
int main(){
    int order,sum=0;
    printf("Enter the order of the square matrix :");
    scanf("%d",&order);
    int matrix[order][order];

    for(int i=0;i<order;i++){
        for(int j=0;j<order;j++){
            printf("Enter the element of i=%d & j=%d :",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }

    for(int i=0;i<order;i++){
            sum+=matrix[i][i];
    }

    //printing sum;
    printf("The sumation of the maritxes is here :\n");
    for(int i=0;i<order;i++){
        printf("|");
        for(int j=0;j<order;j++){
            printf("%4d ",matrix[i][j]);     
        }
        printf("|");
        printf("\n");
         
    }

    printf("\n\n\n");


    printf("The sumation of the diagonal elements is :%d",sum);
    return 0;
}
