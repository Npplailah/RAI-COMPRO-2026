#include <stdio.h>
int main() {
    int numarr = 9;
    int original[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int reverse[numarr];
    for (int i = 0; i < numarr; i++) reverse[i] = original[(numarr - 1) - i];
    printf("Reversed Array: ");
    for (int i = 0; i < numarr; i++) printf("%d ", reverse[i]);
    printf("\n");
    return 0;
}