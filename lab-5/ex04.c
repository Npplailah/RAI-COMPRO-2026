#include <stdio.h>
int main() {
    int numarr = 10;
    int number[numarr];
    int even = 0, odd = 0;
    for (int i = 0; i < numarr; i++) {
        printf("Enter value %d: ", i + 1); scanf("%d", &number[i]);
    }
    for (int i = 0; i < numarr; i++) {
        if (number[i] % 2 == 0) even++;
        else odd++;
    }
    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d\n", odd);
    return 0;
}