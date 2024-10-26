#include <stdio.h>
#include <string.h>
#include <ctype.h>

int check_palindrome(char *s) {
    int len = strlen(s);
    for(int i=0; i<len / 2; i++) {
        if(s[i] != s[len - i - 1]) {
            return 0;
        }        
    }
    return 1;
}

int main() {
    char string[100];
    printf("Enter a string: ");
    scanf("%99s", string);
    int len = strlen(string);

    for(int i=0; i<len; i++) {
        string[i] = tolower(string[i]);
    }

    if(check_palindrome(string)) {
        printf("%s is a palindrome string", string);
    }
    else {
        printf("%s is not a palindrome string", string);
    }
}
