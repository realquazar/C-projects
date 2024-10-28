#include <stdio.h>
int main() {
    int i = 1;
    while(i <= 7);
        printf("%d", &i);
    return 0;
}

/* 
Output:
Infinite loop

Reason:
while with a semicolon at the end: while();
always results in an infinite loop
*/
