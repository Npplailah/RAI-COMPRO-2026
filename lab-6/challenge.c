#include <stdio.h>

struct Student {
    char name[21];
    int id;
    float gd[4];
    float avg;
};

int main() {
    struct Student students[3];
    char subjects[4][10] = { "Math", "English", "Science", "History" };
    float subjectAvg[4] = {0, 0, 0, 0};

    int topStudent = 0;
    int topSubject = 0;

    for (int i = 0; i < 3; i++) {
        printf("Enter name, ID, and 4 grades for student %d:\n", i + 1);
        scanf("%20s %d %f %f %f %f",
            students[i].name, &students[i].id,
            &students[i].gd[0], &students[i].gd[1],
            &students[i].gd[2], &students[i].gd[3]
        );
        
        students[i].avg = 0;
        
        for (int j = 0; j < 4; j++) {
            students[i].avg += students[i].gd[j];
            subjectAvg[j] += students[i].gd[j];
        }

        students[i].avg /= 4;
        printf("\n");
    }
    
    for (int i = 1; i < 3; i++) {
        if (students[i].avg > students[topStudent].avg) topStudent = i;
    }

    printf("Student Averages:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s (ID: %d): %.2f\n", students[i].name, students[i].id, students[i].avg);
    }

    printf("\nTop Student: %s with %.2f\n", students[topStudent].name, students[topStudent].avg);

    printf("\nSubject Averages:\n");
    for (int i = 0; i < 4; i++) {
        subjectAvg[i] /= 3;
        printf("%s: %.2f\n", subjects[i], subjectAvg[i]);
    }

    for (int j = 1; j < 4; j++) {
        if (subjectAvg[j] > subjectAvg[topSubject]) topSubject = j;
    }

    printf("\nTop Subject: %s with average %.2f\n\n", subjects[topSubject], subjectAvg[topSubject]);
    return 0;
}