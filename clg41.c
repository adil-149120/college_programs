#include<stdio.h>
#include<math.h>
int main(){
    char string[100];
    int i=0,j=0,num=0,size=0;
    printf("Enter the string :");
    // fgets(string,sizeof(string),stdin);
    scanf("%s",&string);

    while(string[i]!='\0'){
        size++;
        i++;
    }

    printf("The size of the string is : %d\n",size);

    while(string[j]!='\0'){
        int a=(int)string[j]-48;
        num+=a*pow(10,size-1);
        size--;
        j++;
    }

    
    
    printf("The string is %s and the integer is %d .",string,num);

    return 0;
}