#include <stdio.h>
int main() {
    int num;
    printf("Please enter number : "); scanf("%d", &num);
    for (int i = 0; i < num; i++) printf("*");
    printf("\n");
    for (int i = 0; i < num - 2; i++) {
        for (int j = 0; j < num; j++) {
            if (j == 0 || j == num - 1) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    for (int i = 0; i < num; i++) printf("*");
    printf("\n");
    return 0;
}