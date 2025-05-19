#include<stdio.h>
#include<math.h>

void swap(int *a,int *b){//here ofc int *a have to pass because we are actually altering the values of the 
    int c=*a;            //array itself instead of interchanging the copies of the values of array elements.
    *a=*b;
    *b=c;
}
int main(){
    int arr[5]={1,2,3,4,5};
    printf("Before reversing :\n");
    for(int i=0;i<5;i++){
        printf("%d\n",arr[i]);
    }
    printf("After reversing :\n");
    for(int i=0;i<5/2;i++){
        swap(&arr[i],&arr[5-i-1]);
         
    }
    for(int i=0;i<5;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}