#include <stdio.h>
int main() {
    int numarr = 10;
    int n[numarr];
    for (int i = 0; i < numarr; i++) {
        printf("Enter the value %d here: ", i+1); scanf("%d", &n[i]);
    }
    printf("Values in array are: ");
    for (int i = 0; i < numarr; i++) {
        printf("%d", n[i]);
        if (i < numarr - 1) printf(", ");
    }
    printf("\n");
    return 0;
}