#include<stdio.h>

struct students{
    int roll;
    char name[50];
    char dept[50];
    char course[50];
    int joining_year;
    
};

typedef struct students s;

void yearwise_names(int y,s S[]){
    int i;
    printf("The students who joined in %d :\n",y);
    for(i=0;i<100;i++){
        if(S[i].joining_year==y){
            puts(S[i].name);
        }
    }
}

void rollwise_data(int r,s S[]){
    int i;
    printf("The details of the student whose roll no is %d :\n",r);
    for(i=0;i<100;i++){
        if(S[i].roll==r){  
            printf("   %-15s    %-15s    %-15s %-15s\n","NAME","DEPT","COURSE","JOINING YEAR");
            printf("%-15s %-15s       %-15s %-15d",S[i].name,S[i].dept,S[i].course,S[i].joining_year);
        }
    }
    
}

void copy(char arr1[],char arr2[]){
    int i=0;
    while(arr1[i]!='\0'){
        arr2[i]=arr1[i];
        i++;
    }
    arr2[i]='\0';
}

int main(){
    s S[100];

    S[0].roll=12;
    copy("Adil Ahmed",S[0].name);
    copy("Chemical Engineering",S[0].dept);
    copy("B.E",S[0].course);
    S[0].joining_year=2024;

    S[1].roll=22;
    copy("Miraj Hossain Gayen",S[1].name);
    copy("Electrical Engineering",S[1].dept);
    copy("B.E",S[1].course);
    S[1].joining_year=2024;

    S[2].roll=32;
    copy("Sajidul Hoque",S[2].name);
    copy("Computer Science Engineering",S[2].dept);
    copy("B.Tech",S[2].course);
    S[2].joining_year=2025;

    S[3].roll=133;
    copy("Anik Roy",S[3].name);
    copy("Architecture",S[3].dept);
    copy("B.Arch",S[3].course);
    S[3].joining_year=2022;

    S[4].roll=121;
    copy("Sayan Samanta",S[4].name);
    copy("Pharmacy",S[4].dept);
    copy("B.sc",S[4].course);
    S[4].joining_year=2022;

    yearwise_names(2025,S);
    rollwise_data(12,S);

    return 0;
}