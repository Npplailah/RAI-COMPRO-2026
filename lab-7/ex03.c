#include <stdio.h>
int main() {
    int array[] = { 3, 1, 2, 4, 5, 6 };
    int size = sizeof(array) / sizeof(*array);
    int max = *array;
    for (int *p = array + 1; p < array + size; p++) if (*p > max) max = *p;
    printf("Max value: %d\n", max);
    return 0;
}