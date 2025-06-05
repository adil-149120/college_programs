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

int strendswith(char arr[],char arr2[]){
    int sum=0;
    int arr_size=size(arr);
    int arr2_size=size(arr2);
    int i,j;
    for(i=0;i<arr_size;i++){
        if(i>=arr_size-arr2_size){
            for(j=0;j<arr2_size;j++){
                if(arr[i]==arr2[j])
                    sum++;
            }    
        }
    }
    if(sum==arr2_size) return 1;
    else return 0;
}
int main(){
    char S[100],T[100];
    printf("Enter 1st string :");
    fgets(S,sizeof(S),stdin);
    printf("Enter 2nd string :");
    fgets(T,sizeof(T),stdin);

    printf("%d",strendswith(S,T));

    return 0;
}