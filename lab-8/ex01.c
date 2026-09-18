#include <stdio.h>

float baseArea(float l, float w) { return l * w; }
float perimeter(float l, float w) { return 2 * (l + w); }
float volume(float l, float w, float h) { return l * w * h; }

int main() {
    float length, width, height;
    
    while (1) {
        printf("Enter length, width, and height in cm: "); scanf("%f %f %f", &length, &width, &height);
        if (length > 0 && width > 0 && height > 0) break;
        printf("Error: All dimensions must be greater than 0.\n");
    }

    printf("Base Area: %.2f\n", baseArea(length, width));
    printf("Perimeter: %.2f\n", perimeter(length, width));
    printf("Volume: %.2f\n", volume(length, width, height));
    return 0;
}
