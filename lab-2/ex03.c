#include <stdio.h>
int main() {
    char name[99]; char gender;
    int age, weight; float height;
    char edq[99];
    printf("Enter your Name: "); scanf("%s", &name);
    printf("Enter your Age: "); scanf("%d", &age);
    printf("Enter your height: "); scanf("%f", &height);
    printf("Enter your weight: "); scanf("%d", &weight);
    printf("Enter your gender: "); scanf(" %c", &gender);
    printf("Enter your Education Qualification: "); scanf(" %[^\n]", edq);
    printf("\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Gender: %c\n", gender);
    printf("Height: %.1f\n", height);
    printf("Weight: %d\n", weight);
    printf("Education: %s", edq);
    return 0;
}