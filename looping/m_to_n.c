// prints the numbers from m to n and their sum

#include <stdio.h>
int main() {
    int m, n, sum=0;
    printf("Enter m:\n");
    scanf("%d", &m);
    
    printf("Enter n:\n");
    scanf("%d", &n);

    if(n>m) {
        while(m<=n) {
            printf("%d ", m);
            sum += m;
            m++;
        }
        printf("\nSum = %d", sum);
    }
    else {
        printf("n must be greater than m");
    }
    return 0;   
}
