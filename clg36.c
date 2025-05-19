#include<stdio.h>

void swap(int *a,int *b){
    int c=*a;
    *a=*b;
    *b=c;
}

int main(){
    int arr[10],a;
    for(int i=0;i<10;i++){
        printf("Enter element%d :",i+1);
        scanf("%d",&arr[i]);
    }


    do{
        a=0;
        for(int i=0;i<9;i++){
            if(arr[i]>arr[i+1]){
                swap(&arr[i],&arr[i+1]);
                a++;
            }
        }
    }while(a>0);

    printf("The sorted array is here :\n");
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }


    
    return 0;
}