#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n;
    
    scanf("%d", &n);
    
    int *numbers = malloc(n * sizeof(int));
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    
    qsort(numbers, n, sizeof(int), compare);
    
    for (int i = 0; i < n; i++) {
        printf("%d\n", numbers[i]);
    }
    
    free(numbers);
    
    return 0;
}