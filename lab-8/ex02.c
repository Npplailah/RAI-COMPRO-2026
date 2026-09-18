#include <stdio.h>

int isPalindrome(int n) {
    int reversed = 0, original = n;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed == original;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int start, end, count = 0, sum = 0;

    printf("Enter the start and end numbers: "); scanf("%d %d", &start, &end);

    if (start > end) swap(&start, &end);

    printf("The palindrome numbers within the interval [%d, %d] are:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (isPalindrome(i)) {
            printf("%d ", i);
            count++;
            sum += i;
        }
    }
    printf("\nTotal palindrome numbers: %d\n", count);
    printf("Sum of palindrome numbers: %d\n", sum);
    return 0;
}
