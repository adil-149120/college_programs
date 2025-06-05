#include <stdio.h>

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

void string_copy(char arr[], char arr2[])
{
    int i = 0;
    while (arr[i] != '\0')
    {
        arr2[i] = arr[i];
        i++;
    }
    arr2[i] = '\0';
}

void duplicate_eliminate(char arr[], char arr2[])
{
    int i, j, s = size(arr), k, count;
    string_copy(arr, arr2);
    for (i = 0; i < s; i++)
    {
        for (j = i + 1; j < s;)
        {
            count = 0;
            if (arr[i] == arr[j])
            {
                for (k = j; k < s - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }
                arr[--s] = '\0';
            }
            else
                j++;
        }
    }
}

int greatest(int arr[], int size)
{
    int max = -1, i;
    for (i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

int freq(char arr[], int count[], int size)
{
    int i, j, k;
    for (i = 0; i < size; i++)
    {
        count[i] = 1;
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count[i]++;
                for (k = j; k < size - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }
                size--;
            }
        }
    }
    return size;
}

int main()
{
    char arr[100], arr2[100];
    printf("Enter a string :");
    fgets(arr, sizeof(arr), stdin);

    int s = size(arr);
    int arr3[50];
    int siz = freq(arr, arr3, s);
    duplicate_eliminate(arr, arr2);

    int max = greatest(arr3, siz);
    int count = 0;

    for (int i = 0; i < siz; i++)
    {
        if (max == arr3[i])
        {
            count++;
        }
    }

    if (count == 1)
    {
        for (int i = 0; i < siz; i++)
        {
            if (arr3[i] == max)
            {
                printf("The most frequent character is %c.\n", arr[i]);
                break;
            }
        }
    }
    else
    {
        printf("The most frequent characters are: ");
        for (int j = 0; j < siz; j++)
        {
            if (arr3[j] == max)
            {
                printf("%c ", arr[j]);
            }
        }
        printf("\n");
    }

    return 0;
}
