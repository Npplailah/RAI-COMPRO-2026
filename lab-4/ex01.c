#include <stdio.h>
int main() {
    int n, sum = 0;
    for (int i = 0; i < 10; i++) {
        printf("%d.Enter the number: ", i + 1); scanf("%d", &n);
        sum += n;
    }
    printf("\n");
    printf("total sum is %d\n", sum);
    printf("Average is %.2f\n", (float)sum / 10.0);
    return 0;
}