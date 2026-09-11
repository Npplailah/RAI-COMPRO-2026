#include <stdio.h>
int main() {
    int test = 0;
    int *ptr = &test;
    printf("The address of test variable is at: %p\n", &test);
    
    *ptr = 99;
    printf("The new value of test via pointer is: %d\n", *ptr);

    return 0;
}