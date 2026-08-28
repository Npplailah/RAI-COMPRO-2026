#include <stdio.h>
#include <math.h>

struct Point {
    float x;
    float y;
};

int main() {
    struct Point p1, p2;
    float dx, dy, distance;

    printf("x1: "); scanf("%f", &p1.x);
    printf("y1: ");scanf("%f", &p1.y);
    printf("x2: "); scanf("%f", &p2.x);
    printf("y2: "); scanf("%f", &p2.y);

    dx = p2.x - p1.x;
    dy = p2.y - p1.y;

    distance = sqrt(dx * dx + dy * dy);
    printf("Distance between (%g, %g) and (%g, %g) is %.3f unit(s)\n", p1.x, p1.y, p2.x, p2.y, distance);

    return 0;
}