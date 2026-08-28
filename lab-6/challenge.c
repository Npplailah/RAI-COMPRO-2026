#include <stdio.h>

struct Student {
    char name[21];
    int id;
    float grades[4];
    float average;
};

int main() {
    struct Student students[3];

    char subjects[4][10] = { "Math", "English", "Science", "History" };
    float subjectAverage[4] = {0, 0, 0, 0};

    int topStudent = 0;
    int topSubject = 0;

    for (int i = 0; i < 3; i++) {
        printf("Enter name, ID, and 4 grades for student %d:\n", i + 1);
        scanf("%20s %d %f %f %f %f",
            students[i].name, &students[i].id,
            &students[i].grades[0], &students[i].grades[1],
            &students[i].grades[2], &students[i].grades[3]
        );
        
        students[i].average = 0;
        
        for (int j = 0; j < 4; j++) {
            students[i].average += students[i].grades[j];
            subjectAverage[j] += students[i].grades[j];
        }

        students[i].average /= 4;
        printf("\n");
    }
    
    for (int i = 1; i < 3; i++) {
        if (students[i].average > students[topStudent].average) topStudent = i;
    }

    printf("Student Averages:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s (ID: %d): %.2f\n", students[i].name, students[i].id, students[i].average);
    }

    printf("\nTop Student: %s with %.2f\n", students[topStudent].name, students[topStudent].average);

    printf("\nSubject Averages:\n");
    for (int i = 0; i < 4; i++) {
        subjectAverage[i] /= 3;
        printf("%s: %.2f\n", subjects[i], subjectAverage[i]);
    }

    for (int j = 1; j < 4; j++) {
        if (subjectAverage[j] > subjectAverage[topSubject]) topSubject = j;
    }

    printf("\nTop Subject: %s with average %.2f\n\n", subjects[topSubject], subjectAverage[topSubject]);
    return 0;
}