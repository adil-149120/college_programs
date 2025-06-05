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

int string_int(char arr[]){
    int a=0,i=0;
    while(arr[i]!='\0'){
        a=a*10+(arr[i]-'0');
        i++;
    }
    return a;
}

void function2(char arr[],int *day1,int *month1,int *year1){
    int i=0,part=1,d=0,m=0,y=0;
    char day[5],month[5],year[5];
    while(arr[i]!='\0'){
        if(arr[i]=='/'){
            i++;
            part++;
            continue;
        }
        if(part==1){
            day[d++]=arr[i];
        }
        else if(part==2){
            month[m++]=arr[i];
        }
        else{
            year[y++]=arr[i];
        }
        i++;
    }
    day[d]='\0';
    month[m]='\0';
    year[y]='\0';
    *day1=string_int(day);
    *month1=string_int(month);
    *year1=string_int(year);
}


int compare(int d1,int m1,int y1,int d2,int m2,int y2){
    int r;
    if(y1>y2) r=1;
    if(y1<y2) r=-1;

    if(m1>m2) r=1;
    if(m1<m2) r=-1;

    if(d1>d2) r=1;
    if(d1<d2) r=-1;
    if(d1==d2) r=0;
    return r;
}

int main(){
    char date1[20],date2[20];
    int d1,d2,m1,m2,y1,y2;
    printf("Enter first date :");
    fgets(date1,sizeof(date1),stdin);
    size(date1);
    function2(date1,&d1,&m1,&y1);
    printf("Enter second date :");
    fgets(date2,sizeof(date2),stdin);
    size(date2);
    function2(date2,&d2,&m2,&y2);
    printf("%d",compare(d1,m1,y1,d2,m2,y2));
     
    return 0;
}