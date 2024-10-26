#include <stdio.h>
int main() {
    int num, reversed = 0, remainder;
    printf("Enter number: ");
    scanf("%d", &num);
            
    while(num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    if (num == reversed) {
        printf("palindrome");
    }
    else {
        printf("Not palindrome")
    }
    return 0;
}
