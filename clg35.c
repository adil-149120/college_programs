#include<stdio.h>

 
int main(){
    int matrix1[3][3],matrix2[3][3],sum[3][3],difference[3][3],product[3][3],choice;

do{
    printf("\n---MENU---\n\n");
    printf("Enter 1 for sum.\n");
    printf("Enter 2 for difference.\n");
    printf("Enter 3 for product.\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    if(choice>3 || choice <1){
        printf("\n\n\nEnter a valid choice .\n");
    }

}while(choice!=1 && choice!=2 && choice!=3);

    printf("\n\nEnter the elements of the first 3X3 matrix :-\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter the element of i=%d & j=%d :",i,j);
            scanf("%d",&matrix1[i][j]);
        }
    }


    printf("\n\nEnter the elements of the second 3X3 matrix :\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter the element of i=%d & j=%d :",i,j);
            scanf("%d",&matrix2[i][j]);
        }
    }

    printf("\n\n\n");

    if(choice==1){
        //sum
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                sum[i][j]=matrix1[i][j]+matrix2[i][j];
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
    }

    else if(choice==2){
        //difference
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                difference[i][j]=matrix1[i][j]-matrix2[i][j];
            }
        }
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
    }

    else if(choice==3){
        //product
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                product[i][j]=0;
                for(int k=0;k<3;k++){
                    product[i][j]+=matrix1[i][k]*matrix2[k][j];
                }
            }
        }
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
    }
    else{
        printf("Please Enter a valid choice.");
    }
     
    return 0;
}