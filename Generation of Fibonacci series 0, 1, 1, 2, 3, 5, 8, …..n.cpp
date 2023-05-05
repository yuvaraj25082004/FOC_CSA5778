#include <stdio.h>

int main() {
    int n, i, term1 = 0, term2 = 1, nextTerm;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Fibonacci series up to %d:\n", n);

    printf("%d, %d, ", term1, term2);

    nextTerm = term1 + term2;

    while (nextTerm <= n) {
        printf("%d, ", nextTerm);
        term1 = term2;
        term2 = nextTerm;
        nextTerm = term1 + term2;
    }

    return 0;
}
