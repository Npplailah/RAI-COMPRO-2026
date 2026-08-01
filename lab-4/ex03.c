#include <stdio.h>
int main() {
    int n;
    do {
        printf("Enter the number: "); scanf("%d", &n);
        if (n == 0) printf("Exiting Program... Bye\n");
        else if (n % 2 == 0) printf("%d is even.\n", n);
        else printf("%d is odd.\n", n);
    } while(n != 0);
    return 0;
}