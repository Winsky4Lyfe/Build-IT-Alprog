#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int is_prime(long n) {
    if (n <= 1) return 0;
    if (n == 2 || n == 3) return 1;
    
    if (n % 2 == 0 || n % 3 == 0) return 0;
    
    long limit = (long)sqrt(n);
    for (long i = 5; i <= limit; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return 0;
    }
    
    return 1;
}

int main() {
    long n;
    
    scanf("%ld", &n);
    
    if (is_prime(n)) {
        printf("PRIMA\n");
    } else {
        printf("BUKAN\n");
    }
    
    return 0;
}
