#include<stdio.h>
int size(char arr[]){
    int s=0;
    while(arr[s]!='\0'){
        s++;
    }
    return s-1;
}
int main(){
    char arr[100],i,a=0;
    printf("Enter a string :");
    fgets(arr,sizeof(arr),stdin);
    printf("%d",size(arr));

    for(i=0;i<size(arr)/2;i++){
        if(arr[i]==arr[size(arr)-1-i]) 
            a++;
    }
    (a==size(arr)/2)? printf("The string is palindrome ."):printf("The string is not palindorme .");

}