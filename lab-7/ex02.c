#include <stdio.h>
int main() {
    int a = 10, b = 20, c = 30;
    int *pa = &a, *pb = &b, *pc = &c, temp;
    printf("Before swap: a=%d, b=%d, c=%d\n", *pa, *pb, *pc);
    
    temp = *pa; *pa = *pb; *pb = *pc; *pc = temp;
    printf("After swap: a=%d, b=%d, c=%d\n", *pa, *pb, *pc);

    return 0;
}