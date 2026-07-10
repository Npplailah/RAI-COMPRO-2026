#include <stdio.h>
int main() {
    printf("%4c", '^'); printf("%4c\n", '^');
    printf("(%3c", '^'); printf("%4c", '^'); printf("%3c)\n");
    printf("%6c", 'o');
    return 0;
}