#include <stdio.h>

int main() {
    int size = 5;
    int arr[5];
    
    printf("Enter 5 integers: ");
    for (int *p = arr; p < arr + size; p++) {
        scanf("%d", p);
    }

    for (int i = 0; i < size - 1; i++) {
        for (int *p = arr; p < arr + size - 1 - i; p++) {
            if (*p > *(p + 1)) {
                int temp = *p;
                *p = *(p + 1);
                *(p + 1) = temp;
            }
        }
    }

    printf("Sorted:");
    for (int *p = arr; p < arr + size; p++) printf(" %d", *p);
    printf("\n");

    return 0;
}