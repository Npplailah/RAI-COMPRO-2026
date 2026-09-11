#include <stdio.h>
int main() {
    int size = 6;
    int array[] = {3, 1, 2, 4, 5, 6};
    int *ptr;
    int sum = 0;

    for (ptr = array; ptr < array + size; ptr++) if (*ptr % 2 == 0) sum += *ptr;
    
    printf("The sum of even numbers is: %d\n", sum);
    return 0;
}