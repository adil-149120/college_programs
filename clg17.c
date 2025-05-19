#include<stdio.h>
#include<math.h>

int over(int a ){
    if(a==9) return 0;
    else return a+1;
}
int main(){
    int num,new=0,i=0,a;
    printf("Enter a integer :");
    scanf("%d",&num);
   
    while(num>0){
        a=num%10;
        new+=over(a)*pow(10,i);
        i++;
        num/=10;
    }
    printf("The new number is %d .\n",new);
    return 0;
}