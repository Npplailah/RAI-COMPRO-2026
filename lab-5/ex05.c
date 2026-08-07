#include <stdio.h>
int main() {
    int numarr = 8;
    int number[numarr];
    int max = 0, min = 0;
    for (int i = 0; i < numarr; i++) {
        printf("Enter number %d: ", i + 1); scanf("%d", &number[i]);
    }
    max = number[0];
    min = number[0];
    for (int i = 1; i < numarr; i++) {
        if (number[i] > max) max = number[i];
        else if (number[i] < min) min = number[i];
    }
    printf("Smallest number: %d\n", min);
    printf("Largest number: %d\n", max);
    return 0;
}