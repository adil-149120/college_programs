#include<stdio.h>

void eliminate(int index,int *size,int *arr[]){
    for(int i=index;i<*size-1;i++){
        *arr[i]=*arr[i+1];    
    }
    (*size)--;
}

int main(){
    int n,size;
    printf("Enter the array size :");
    scanf("%d",&n);
    int arr[n];
    // size=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(arr[i]==arr[j] && i!=j){
                printf("i=%d,j=%d",i,j);
                // eliminate(j,&size,&arr[n]);
            }
        }
    }
    for(int i=0;i<size;i++){
        printf("%d",arr[i]);
    }

    return 0;
}