#include <stdio.h>
int main() {
    int numarr = 5;
    int marks[numarr];
    int sum = 0, max = 0;
    for (int i = 0; i < numarr; i++) {
        printf("Enter the marks of student %d: ", i + 1); scanf("%d", &marks[i]);
        sum += marks[i];
        if (marks[i] > max || i == 0) max = marks[i];
    }
    printf("Total Marks : %d\n", sum);
    printf("Highest Marks: %d\n", max);
    return 0;
}