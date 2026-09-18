#include <stdio.h>

void sumByIndex(int arr[], int n) {
    int evenSum = 0, oddSum = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) evenSum += arr[i];
        else oddSum += arr[i];
    }

    int evenCount = (n + 1) / 2;
    int oddCount = n / 2;

    printf("Even index elements -> Sum: %d, Average: %.2f\n", evenSum, (float)evenSum / evenCount);
    printf("Odd index elements -> Sum: %d, Average: %.2f\n", oddSum, (float)oddSum / oddCount);
}

int main() {
    int n, arr[100];
    printf("N: "); scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        printf("Input: "); scanf("%d", &arr[i]);
    }

    printf("Output:\n");
    sumByIndex(arr, n);
}
