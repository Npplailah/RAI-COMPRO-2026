#include <stdio.h>
int main() {
    int age; float height;
    char name[99], surname[99], uni_name[99];
    printf("Enter your full name: "); scanf("%s %s", &name, &surname);
    printf("Enter your age: "); scanf("%d", &age);
    printf("Enter your height: ") ;scanf("%f", &height);
    printf("Enter you University name: "); scanf(" %[^\n]", &uni_name);
    printf("Hi! Everyone. This is %c.%s from KMITL. I am %d years old and my height is %.1f cm tall.", surname[0], name, age, height);
    return 0;
}