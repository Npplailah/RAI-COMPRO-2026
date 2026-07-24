#include <stdio.h>
int main() {
    int score[3];
    float grade[3];
    char grade_T[3];

    printf("Calculus score: "); scanf("%d", &score[0]);
    printf("Physic score: "); scanf("%d", &score[1]);
    printf("Compro score: "); scanf("%d", &score[2]);

    for (int i = 0; i < 3; i++) {
        if (score[i] >= 80) {
            grade[i] = 4.0;
            grade_T[i] = 'A';
        } else if (score[i] >= 70) {
            grade[i] = 3.0;
            grade_T[i] = 'B';
        } else if (score[i] >= 60) {
            grade[i] = 2.0;
            grade_T[i] = 'C';
        } else if (score[i] >= 50) {
            grade[i] = 1.0;
            grade_T[i] = 'D';
        } else {
            grade[i] = 0.0;
            grade_T[i] = 'F';
        }
    }

    printf("\n%-8s %-8s %-8s %-8s\n", "Subject", "Score", "Grade", "Grade");
    printf("--------------------------------\n");
    printf("%-8s %-8d %-8c %-80.2f\n", "Cal", score[0], grade_T[0], grade[0]);
    printf("%-8s %-8d %-8c %-80.2f\n", "Physics", score[1], grade_T[1], grade[1]);
    printf("%-8s %-8d %-8c %-80.2f\n\n", "compro", score[2], grade_T[2], grade[2]);
    printf("GPA: %.2f\n", (grade[0] + grade[1] + grade[2]) / 3);

    return 0;
}