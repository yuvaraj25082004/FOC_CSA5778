#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Even number series up to %d:\n", n);

    for (int i = 2; i <= n; i += 2) {
        printf("%d ", i);
        sum += i;
    }

    printf("\nSum of the even number series: %d\n", sum);

    return 0;
}
