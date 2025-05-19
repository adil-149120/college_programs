#include<stdio.h>
int main(){
    char string[100],i=0;
    printf("Enter the string :");
    fgets(string,sizeof(string),stdin);

    

    while(string[i]!='\0'){
        if(string[i]>='a' && string[i]<='z'){
            string[i]=(char)((int)string[i]-32);
        }
        i++;
    }
    
    printf("%s",string);
    return 0;
}