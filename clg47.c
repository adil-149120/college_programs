#include<stdio.h>
int size(char arr[]){
    int s=0;
    while(arr[s]!='\0'){
        s++;
    }
    return s-1;
}
int main(){
    int i,words=1;
    char arr[100];
    printf("Enter a string :");
    fgets(arr,sizeof(arr),stdin);
    for(i=0;i<size(arr);i++){
        if(arr[i]==' ')
            words++;
    }
    printf("The number of words in the line are : %d",words);
    return 0;
}