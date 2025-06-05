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



void function(char arr[],char arr2[]){
    int i=0,part=1,m=0,d=0,y=0,j=0;
    char month[5],day[5],year[5];
    char m_list[12][10]={"January","February","March","April","May","June","July","August",
        "September","October","November","December"};

    while(arr[i]!='\0'){
        if(arr[i]=='/'){
            part++;
            i++;
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

    int k=0;
    while(day[k]!='\0'){
        arr2[j++]=day[k++];
    }
    arr2[j++]='-';
    k=0;
    while(m_list[string_int(month)-1][k]!='\0'){
        arr2[j++]=m_list[string_int(month)-1][k++];
    }
    arr2[j++]='-';
    k=0;
    while(year[k]!='\0'){
        arr2[j++]=year[k++];
    }
    arr2[j]='\0';
}

int main(){
    char date[50],date2[50];
    printf("Enter a date :");
    fgets(date,sizeof(date),stdin);
    size(date);
    function(date,date2);
    printf("The Entered date is :%s",date2);
    return 0;
}