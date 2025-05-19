#include<stdio.h>
#include<math.h>
int main(){
    int num,i,j,k;
    printf("Enter a integer :");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        k=0;
        for(j=1;j<num+i;j++){
            if(j<=num-i) printf(" ");
            else if(j>num-i && j<=num){
                k++;
                printf("%d",k);    
            }
            else{
                k--;
                printf("%d",k);    
            }
        }
        printf("\n");
    }
    return 0;
}
