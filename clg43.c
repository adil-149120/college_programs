#include<stdio.h>
#include<string.h>

int main(){
    char arr[100],initials[10]="";
    printf("Enter a name :");
    fgets(arr,sizeof(arr),stdin);
    arr[strcspn(arr,"\n")]=0;
     
    for(int i=0;i<strlen(arr);i++){
        if(i==0) strncat(initials,&arr[i],1);
        else if( arr[i]==' ') strncat(initials,&arr[i+1],1);
    }
    
    printf("The initials of the name is :%s",initials);
    return 0;
}