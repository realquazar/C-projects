#include <stdio.h>
int main() {
    int a = 10;
    float b = 3.14;
    char c = 'c';
    
    // Strings in C don't directly have a datatype instead they're an array of characters
    char string_in_c[] = "Hello";

    // '&' is used to retrieve the address of a variable in C
    printf("integer: %d", &a);
    printf("float: %f", &b);
    printf("character: %c", &c);
    
    // Strings don't require '&' because arrays use pointers which points to the first character
    // Other data types like int or float don't use pointers and are stored in the memory at a particular address
    printf("string: %s", string_in_c);
    return 0;
  
}
