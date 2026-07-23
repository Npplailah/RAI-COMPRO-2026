#include <stdio.h>
int main() {
    int time;
    printf("Enter total minutes: "); scanf("%d", &time);
    int hour = time / 60;
    int minute = time % 60;
    printf("%d minutes is %d hour(s) and %d minute(s)", time, hour, minute);
    return 0;
}