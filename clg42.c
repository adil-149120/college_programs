#include <stdio.h>

int max(int a,int b){
    return(a>b)?a:b;
}

int size(char arr[])
{
    int i = 0;
    while (arr[i] != '\0')
    {
        if (arr[i] == '\n')
        {
            arr[i] = '\0';
            break;
        }
        i++;
    }
    return i;
}

void swap(char arr1[], char arr2[])
{
    int i = 0;
    char temp[100];
    while (arr1[i] != '\0')
    {
        temp[i] = arr1[i];
        i++;
    }
    temp[i] = '\0';

    i = 0;
    while (arr2[i] != '\0')
    {
        arr1[i] = arr2[i];
        i++;
    }
    arr1[i] = '\0';

    i = 0;
    while (temp[i] != '\0')
    {
        arr2[i] = temp[i];
        i++;
    }
    arr2[i] = '\0';
}

int main()
{
    int num, a;
    char arr[100][20];
    printf("Enter how many names want to enter :");
    scanf("%d", &num);
    getchar();

    for (int i = 0; i < num; i++)
    {
        printf("Enter name%d :", i + 1);
        fgets(arr[i], sizeof(arr[i]), stdin);
        size(arr[i]);
    }

     do {
        a = 0;
        for (int i = 0; i < num - 1; i++) {
            int j = 0;
            while (arr[i][j] != '\0' && arr[i + 1][j] != '\0') {
                if (arr[i][j] > arr[i + 1][j]) {
                    swap(arr[i], arr[i + 1]);
                    a++;
                    break;
                } else if (arr[i][j] < arr[i + 1][j]) {
                    break;
                }
                j++;
            }

            // One string is shorter but identical so far
            if (arr[i][j] != '\0' && arr[i + 1][j] == '\0') {
                swap(arr[i], arr[i + 1]);
                a++;
            }
        }
    } while (a > 0);

    printf("\n\n");
    printf("Names in alphabetical order is here :\n");
    for (int i = 0; i < num; i++)
    {
        puts(arr[i]);
    }

    return 0;
}