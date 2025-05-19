#include<stdio.h>
#include<math.h>

int main(){
    int arr[5]={1,2,3,4,5};
    printf("Before reversing :\n");
    for(int i=0;i<5;i++){
        printf("%d\n",arr[i]);
    }
    printf("After reversing :\n");
    for(int i=0;i<5/2;i++){
        int c=arr[i];
        arr[i]=arr[5-i-1];
        arr[5-i-1]=c;
    }
    for(int i=0;i<5;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}