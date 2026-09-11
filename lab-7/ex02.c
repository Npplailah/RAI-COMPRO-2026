#include <stdio.h>
int main() {
    int a = 0, b = 5, *pa = &a, *pb = &b, temp;
    printf("Before reverse : a = %d, b = %d\n", a, b);
    temp = *pa; *pa = *pb; *pb = temp;
    printf("After reverse :  a = %d, b = %d\n", a, b);
    return 0;
}