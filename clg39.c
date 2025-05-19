#include<stdio.h>

int size(char arr[]){
    int i=0;
    while(arr[i]!='\0'){i++;}
    return i-1;
}

 
int main(){
    char string[100];
    printf("Enter the string :");
    fgets(string,sizeof(string),stdin);//it can take each and every character with newlline and space.
    printf("The string is %s & the number of character is : %d.",string,size(string));
    
    return 0;
}