#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Odd number series up to %d:\n", n);

    for (int i = 1; i <= n; i += 2) {
        printf("%d ", i);
        sum += i;
    }

    printf("\nSum of the odd number series: %d\n", sum);

    return 0;
}