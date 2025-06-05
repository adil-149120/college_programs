#include<stdio.h>
#include<string.h>

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
    char firstname[20],lastname[20],space[5]=" ",name[50]=""; 
    int i=0,j;
    printf("Enter first name :");
    fgets(firstname,sizeof(firstname),stdin);
    size(firstname);
    printf("Enter lastname :");
    fgets(lastname,sizeof(lastname),stdin);
    size(lastname);

    
        for(j=0;j<size(firstname);j++){
            name[i++]=firstname[j];
        }
        name[i++]=' ';
        for(j=0;j<size(lastname);j++){
            name[i++]=lastname[j];
        }
        name[i]='\0';
    
    printf("The full name is : %s",name);
    return 0;
}