#include<stdio.h>
int main(){
    int matrix1[3][3],matrix2[3][3],sum[3][3],difference[3][3],product[3][3];

    printf("Enter the elements of the first matrix :-\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter the element of i=%d & j=%d :",i,j);
            scanf("%d",&matrix1[i][j]);
        }
    }

    printf("Enter the elements of the second matrix :\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter the element of i=%d & j=%d :",i,j);
            scanf("%d",&matrix2[i][j]);
        }
    }

    printf("\n\n\n");

    //sum
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum[i][j]=matrix1[i][j]+matrix2[i][j];
        }
    }

    //difference
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            difference[i][j]=matrix1[i][j]-matrix2[i][j];
        }
    }

    //product
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            product[i][j]=0;
            for(int k=0;k<3;k++){
                product[i][j]+=matrix1[i][k]*matrix2[k][j];
            }
        }
    }

    //printing sum;
    printf("The sumation of the maritxes is here :\n");
    for(int i=0;i<3;i++){
        printf("|");
        for(int j=0;j<3;j++){
            printf("%4d ",matrix1[i][j]);     
        }
        printf("|");
        if(i==1) printf("  +  ");
        else printf("     ");
        printf("|");
        for(int j=0;j<3;j++){
            printf("%4d ",matrix2[i][j]);     
        }
        printf("|");
        if(i==1) printf("  =  ");
        else printf("     ");
        printf("|");
        for(int j=0;j<3;j++){
            printf("%4d ",sum[i][j]);     
        }
        printf("|");
        printf("\n");
         
    }

    printf("\n\n\n");


    //printing of difference
    printf("The difference of the maritxes is here :\n");
    for(int i=0;i<3;i++){
        printf("|");
        for(int j=0;j<3;j++){
            printf("%4d ",matrix1[i][j]);     
        }
        printf("|");
        if(i==1) printf("  -  ");
        else printf("     ");
        printf("|");
        for(int j=0;j<3;j++){
            printf("%4d ",matrix2[i][j]);     
        }
        printf("|");
        if(i==1) printf("  =  ");
        else printf("     ");
        printf("|");
        for(int j=0;j<3;j++){
            printf("%4d ",difference[i][j]);     
        }
        printf("|");
        printf("\n");
         
    }

    printf("\n\n\n");


    //printing product
    printf("The product of the maritxes is here :\n");
    for(int i=0;i<3;i++){
        printf("|");
        for(int j=0;j<3;j++){
            printf("%4d ",matrix1[i][j]);     
        }
        printf("|");
        if(i==1) printf("  x  ");
        else printf("     ");
        printf("|");
        for(int j=0;j<3;j++){
            printf("%4d ",matrix2[i][j]);     
        }
        printf("|");
        if(i==1) printf("  =  ");
        else printf("     ");
        printf("|");
        for(int j=0;j<3;j++){
            printf("%4d ",product[i][j]);     
        }
        printf("|");
        printf("\n");
         
    }

    printf("\n\n\n");

    return 0;
}