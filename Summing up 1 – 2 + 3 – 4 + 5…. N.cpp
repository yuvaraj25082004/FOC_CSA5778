#include <stdio.h>

int main() {
    int N, sum = 0;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    printf("Series 1 - 2 + 3 - 4 + 5 - ... + %d:\n", N);

    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            sum -= i;
            printf("-%d ", i);
        } else {
            sum += i;
            printf("%d ", i);
        }
    }

    printf("\nSum of the series: %d\n", sum);

    return 0;
}
