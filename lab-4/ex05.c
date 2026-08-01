#include <stdio.h>
int main() {
    int n, fac = 1;
    printf("Enter a number: "); scanf("%d", &n);
    for (int i = n; i >= 1; i--) fac *= i;
    printf("Factorial of %d is %d\n", n, fac);
    return 0;
}