#include <stdio.h>
int main() {
    int elements;
    printf("Input:\n");
    printf("Enter number of elements: "); scanf("%d", &elements);
    printf("Enter %d integers: ", elements);
    int number[elements];
    for (int i = 0; i < elements; i++) scanf("%d", &number[i]);
    printf("\n");
    for (int i = 0; i < elements; i++) {
        int nub = 0;
        for (int j = 0; j < elements; j++) {
            if (number[i] == number[j]) nub++;
        }
        int duplicate = 0;
        for (int k = 0; k < i; k++) {
            if (number[k] == number[i]) {
                duplicate = 1;
                break;
            }
        }
        if (duplicate == 0) printf("Element %d occurs %d times\n", number[i], nub);
    }
}