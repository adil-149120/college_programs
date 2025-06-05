#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("It is a capital letter.\n");
    } else if (ch >= 'a' && ch <= 'z') {
        printf("It is a small case letter.\n");
    } else if (ch >= '0' && ch <= '9') {
        printf("It is a digit.\n");
    } else {
        printf("It is a special symbol.\n");
    }

    return 0;
}
