#include<stdio.h>
#include<string.h>

void swap(char *arr1[],char *arr2[]){
    char *a=*arr1;
    *arr1=*arr2;
    *arr2=*a;
}

int main(){
    int num,a;
    char arr[100][20];
    printf("Enter how many names want to enter :");
    scanf("%d",&num);
    getchar();


    for(int i=0;i<num;i++){
        printf("Enter name%d :",i+1);
        fgets(arr[i],sizeof(arr[i]),stdin);
        //arr[strcspn(arr,"\n")][i]=0;
    }

    for(int i=0;i<num;i++){
        fputs(arr[i],stdout);
    }

    do{
        a=0;
        for(int i=0;i<num-1;i++){
            for(int j=0;j<strlen(arr[i]);){
                if(strcmp(arr[i],arr[i+1]>0)){
                    swap(&arr[i],&arr[i+1]);
                    a++;
                    j++;
                }
                else if(strcmp(arr[i][j],arr[i+1][j])==0){
                    j++;
                }
            }    
        }
    }while(a>0);

    printf("\n\n");

    for(int i=0;i<num;i++){
        fputs(arr[i],stdout);
    }

    return 0;
}