#include <stdio.h>
int main() {
    int n, sum = 0;
    int i = 0;
    while (i < 10) {
        printf("%d.Enter the number: ", i + 1); scanf("%d", &n);
        sum += n;
        i++;
    }
    printf("Total sum is %d\n", sum);
    return 0;
}