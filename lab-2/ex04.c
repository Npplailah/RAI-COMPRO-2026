#include <stdio.h>
int main() {
    char name[99];
    int id;
    float compro, phy, cal, gpa;
    printf("Enter your Name: "); scanf("%s", &name);
    printf("Enter your student ID: "); scanf("%d", &id);
    printf("Enter your Programming score: "); scanf("%f", &compro);
    printf("Enter your Physics score: "); scanf("%f", &phy);
    printf("Enter your Calculus score: "); scanf("%f", &cal);
    gpa = (compro + phy + cal) / 3.0;
    printf("Hi %s(%d)! Your GPA is %.2f", name, id, gpa);
    return 0;
}