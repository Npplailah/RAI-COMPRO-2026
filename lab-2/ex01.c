#include <stdio.h>
int main() {
    int num_int;
    float num_float;
    char ch;
    printf("Please enter an integer value: "); scanf("%d", &num_int);
    printf("You entered %d\n", num_int);
    printf("Please enter a float value: "); scanf("%f", &num_float);
    printf("You entered %.1f\n", num_float);
    printf("Please enter a character: "); scanf("%s", &ch);
    printf("You entered %c", ch);
    return 0;
}