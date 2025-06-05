#include<stdio.h>

void eliminate(int index,int *size,int arr[]){
    for(int i=index;i<*size-1;i++){
        arr[i]=arr[i+1];    
    }
    (*size)--;
}

int main(){
    int n,size;
    printf("Enter the array size :");
    scanf("%d",&n);
    int arr[n];
    size=n;

    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;){
            if(arr[i]==arr[j]){
                eliminate(j,&size,arr);
            }
            else j++;
        }
    }
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}