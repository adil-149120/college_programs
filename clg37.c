#include<stdio.h>

int half(int a){
    if(a%2==0) return a/2 ;
    else return a/2+1;
} 

int main(){
    int rows,columns;
    printf("Enter number of rows :");
    scanf("%d",&rows);
    printf("Enter number of columns :");
    scanf("%d",&columns);

    int matrix[rows][columns],transpose[columns][rows];

    printf("Enter the elements of the first matrix :-\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            printf("Enter the element of i=%d & j=%d :",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }

     
    //transpose
    for(int i=0;i<columns;i++){
        for(int j=0;j<rows;j++){
            transpose[i][j]=matrix[j][i];
        }
    }
 

    //printing transpose
    printf("The transpose of the maritxes is here :\n");
    for(int i=0;i<columns;i++){
        printf("|");
        for(int j=0;j<rows;j++){
            printf("%4d ", transpose[i][j]);     
        }
        printf("|");
        printf("\n");
    }

    printf("\n\n\n");


     

    return 0;
}