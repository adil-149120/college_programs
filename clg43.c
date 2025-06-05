#include<stdio.h>
int size(char arr[]){
    int i=0;
    while(arr[i]!='\0'){
        if(arr[i]=='\n'){
            arr[i]='\0';
            break;
        }
        i++;
    }
        return i;
}

int main(){
    char arr[100],initials[20];
    printf("Enter a name :");
    fgets(arr,sizeof(arr),stdin);
    size(arr);
    //arr[strcspn(arr,"\n")]=0;
    int a=0;
    initials[a++]=arr[0];
    for(int i=1;i<size(arr);i++){
        if( arr[i]==' '){
            initials[a++]=arr[i+1];
        }
    }
    initials[a]='\0';
    
    printf("The initials of the name is :%s",initials);
    return 0;
}