#include <stdio.h>
int main() {
    int size = 6;
    int array[] = { 3, 1, 2, 4, 5, 6 };
    int sum = 0;
    for (int *p = array; p < array + size; p++) sum += *p;
    printf("The sum of array is: %d\n", sum);
    return 0;
}