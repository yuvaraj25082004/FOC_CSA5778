#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i += 2) {
        sum += (i * i);
    }

    printf("The sum of the squares of odd numbers up to %d is: %d\n", n, sum);

    return 0;
}
