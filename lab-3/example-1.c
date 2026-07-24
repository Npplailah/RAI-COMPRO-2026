#include <stdio.h>
int main() {
    int num1, num2;
    printf("Enter number1: "); scanf("%d", &num1);
    printf("Enter number2: "); scanf("%d", &num2);
    if (num2 !=0 ) {
        printf("Result: %.2f\n", num1 / ( num2 * 1.0 ));
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
    return 0;
}