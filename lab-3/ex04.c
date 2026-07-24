#include <stdio.h>
int main() {
    
    int cal, phy, sci;
    char name[99];
    
    printf("Enter your name: "); scanf("%s", name);
    printf("Enter your Calculus score: "); scanf("%d", &cal);
    printf("Enter your Physic score: "); scanf("%d", &phy);
    printf("Enter your Science score: "); scanf("%d", &sci);

    float avg = (cal + phy + sci) / 3.0;

    if (avg >= 80) printf("%s, you average is %.2f. You got grade A.\n", name, avg);
    else if (avg >= 70) printf("%s, you average is %.2f. You got grade B.\n", name, avg);
    else if (avg >= 60) printf("%s, you average is %.2f. You got grade C.\n", name, avg);
    else if (avg >= 50) printf("%s, you average is %.2f. You got grade D.\n", name, avg);
    else printf("%s, you average is %.2f. You got grade F.\n", name, avg);
    
    return 0;
}