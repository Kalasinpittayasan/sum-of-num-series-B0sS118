#include <stdio.h>

int sum_of_numbers(int n) {
    return n * (n + 1) / 2;
}

int main() {
    int n;
    printf(" n: ");
    scanf("%d", &n);

    printf(" 1  %d  %d\n", n, sum_of_numbers(n));

    return 0;
}
