#include <stdio.h>
int main() {
    int i = 1;
    while(i <= 7)
        printf("%d", &i);
    return 0;
}

/* 
Expected Output:
1111111111...
Infinite loop
Note: This may not be the output due to memory issues in C
*/
