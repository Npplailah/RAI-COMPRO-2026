#include <stdio.h>
int main() {
    
    int h, r;
    
    printf("Enter cone height: "); scanf("%d", &h);
    printf("Enter cone base radius: "); scanf("%d", &r);
    
    float vol = (1.0/3.0) * ((22.0/7.0) * r * r * h);
    
    printf("Cone volume = %.2f", vol);
    
    if (vol > 260) printf("\nThis cone is perfect for Supun project\n");
    else printf("\nThis cone is not fit for this project\n");
    
    return 0;
}