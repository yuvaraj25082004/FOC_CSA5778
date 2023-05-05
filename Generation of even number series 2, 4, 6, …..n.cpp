#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    printf("Even number series from 2 to %d:\n", n);
    
    // Iterate from 2 to n and increment by 2 in each step
    for (i = 2; i <= n; i += 2) {
        printf("%d ", i);
    }
    
    return 0;
}
