#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: "); scanf("%d", &n);
    printf("\nMultiplication Table for %d:\n", n);
    for (int i = 1; i <= 12; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}