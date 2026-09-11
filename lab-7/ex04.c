#include <stdio.h>
int main() {
    int size = 6;
    int array[] = { 3, 1, 2, 4, 5, 6 };
    for (int *p = array; p < array + size; p++) printf("%d\n", *p);
    return 0;
}