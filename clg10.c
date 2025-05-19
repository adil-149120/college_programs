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

    /*
    this is basically by ascii value but the above one is more efficient.
     
#include <stdio.h>

int main() {
    char ch;
    
    printf("Enter a character :");
    scanf("%c",&ch);
    int num=(int)ch;
    if(num>=65 && num<=90) printf("The charater is a upper case letter .\n");
    else if(num>=97 && num<=122) printf("The charater is a lower case letter .\n");
    else if(num>=48 && num<=57) printf("The character is a digit .\n");
    else printf("The character is a special character .\n");
     
     
     

    return 0;
}
    */

    return 0;
}
