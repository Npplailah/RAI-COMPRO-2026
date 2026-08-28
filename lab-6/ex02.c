#include <stdio.h>

struct Student {
    char name[101];
    int age;
    float score;
};

int main() {
    struct Student students[3];
    int maxScore;

    for (int i = 0; i < 3; i++) {
        printf("Student %d's name: ", i + 1); scanf(" %100[^\n]", students[i].name);
        printf("Student %d's age: ", i + 1); scanf("%d", &students[i].age);
        printf("Student %d's score: ", i + 1); scanf("%f", &students[i].score);
        printf("\n");
    }
    
    maxScore = students[0].score;

    for (int i = 0; i < 3; i++) {
        printf("Student %d name is \"%s\", age %d, score %.1f\n", i + 1, students[i].name, students[i].age, students[i].score);
    }

    for (int i = 1; i < 3; i++) {
        if (students[i].score > maxScore) {
            maxScore = i;
        }
    }
    printf("\nThe highest scores belongs to %s at %.1f scores!\n", students[maxScore].name, students[maxScore].score);
    

    return 0;
}