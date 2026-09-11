#include <stdio.h>
int main() {
    int size = 6;
    int array[] = {3, 1, 2, 4, 5, 6};
    int *ptr = array + size;

    while (ptr > array) {
        ptr--; printf("%d\n", *ptr);
    }

    return 0;
}