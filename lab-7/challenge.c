#include <stdio.h>
int main() {
    int arr[5], n = 5;
    int *p;
    int temp;

    printf("Enter 5 integers: ");
    for (p = arr; p < arr + n; p++) {
        if (scanf("%d", p) != 1) {
            printf("Invalid input\n"); return 1;
        }
    }

    for (int i = 0; i < n - 1; i++) {
        for (p = arr; p < arr + n - 1 - i; p++) {
            if (*p < *(p + 1)) {
                temp = *p;
                *p = *(p + 1);
                *(p + 1) = temp;
            }
        }
    }

    printf("Sorted descending:");
    for (p = arr; p < arr + n; p++) printf(" %d", *p);
    printf("\n");

    return 0;
}