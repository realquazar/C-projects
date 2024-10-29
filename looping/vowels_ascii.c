// Prints the ASCII values of he vowels in english
#include <stdio.h>
int main() {
    char vowels[] = "aeiou";
    for(int i=0; i<=4; i++) {
        printf("ASCII code for %c = %d\n", vowels[i], vowels[i]);
    }
    return 0;  
}
