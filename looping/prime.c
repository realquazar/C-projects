#include <stdio.h>

int is_prime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int count = 0;
    int num = 2;
    
    while (count < 100) {
        if (is_prime(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    
    return 0;
}
