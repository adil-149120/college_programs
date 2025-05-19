#include<stdio.h>
#include<string.h>

int check_char(char a){
    if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u') 
        return 1;
    else if(a=='A' || a=='E' || a=='I' || a=='O' || a=='U') 
        return 1;
    else 
        return 0;
}

int main(){
    char arr[100],i,count=0;
    printf("Enter a line :");
    fgets(arr,sizeof(arr),stdin);
    arr[strcspn(arr,"\n")]=0;

    for(i=0;i<strlen(arr);i++){
        if(check_char(arr[i])==1 && check_char(arr[i+1])==1) 
            count++;
    }

    printf("The number of successive vowels : %d",count);
    return 0;
}