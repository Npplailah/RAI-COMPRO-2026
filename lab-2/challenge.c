#include <stdio.h>
int main() {
    int num1, num2, num3;
    printf("Enter integer #1: "); scanf("%d", &num1);
    printf("Enter integer #2: "); scanf("%d", &num2);
    printf("Enter integer #3: "); scanf("%d", &num3);
    printf("\n");
    printf("Result\n");
    int sum = num1 + num2 + num3;
    float avg = sum / 3.0;
    int max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
    int min = (num1 < num2) ? ((num1 < num3) ? num1 : num3) : ((num2 < num3) ? num2 : num3);
    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
    printf("Sum: %d\n", sum);
    printf("Average: %.2f", avg);
    return 0;
}