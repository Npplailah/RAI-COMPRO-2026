#include <stdio.h>
int main() {
    int array[] = {3, 1, 2, 4, 5, 6};
    int size = sizeof(array) / sizeof(*array);
    int *ptr;
    int max = *array, min = *array;

    for (ptr = array + 1; ptr < array + size; ptr++) {
        if (*ptr > max) max = *ptr;
        if (*ptr < min) min = *ptr;
    }
    
    printf("Max value: %d\n", max);
    printf("Min value: %d\n", min);
    
    return 0;
}