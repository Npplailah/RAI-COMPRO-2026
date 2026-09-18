#include <stdio.h>

float average(int grades[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) sum += grades[i];
    return (float)sum / n;
}

void highestLowest(char names[][50], int grades[], int n) {
    int high = 0, low = 0;
    for (int i = 1; i < n; i++) {
        if (grades[i] > grades[high]) high = i;
        if (grades[i] < grades[low]) low = i;
    }

    printf("Highest grade: %d (%s)\n", grades[high], names[high]);
    printf("Lowest grade: %d (%s)\n", grades[low], names[low]);
}

int main() {
    int n, grades[100];
    char names[100][50];

    printf("Enter number of students: "); scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1); scanf("%s", names[i]);
        printf("Enter grade of %s: ", names[i]); scanf("%d", &grades[i]);
    }
    
    printf("--- Results ---\n");
    printf("Average grade: %.2f\n", average(grades, n));
    highestLowest(names, grades, n);
    printf("Students who passed:\n");
    for (int i = 0; i < n; i++) {
        if (grades[i] >= 60) printf("%s - Grade %c\n", names[i], grades[i] >= 80 ? 'A' : grades[i] >= 70 ? 'B' : 'C');
    }
}