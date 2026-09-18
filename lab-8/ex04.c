#include <stdio.h>
#include <ctype.h>

void countChars(char str[]) {
    int letters = 0, digits = 0, specials = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) letters++;
        else if (isdigit(str[i])) digits++;
        else specials++;
    }

    printf("Letters: %d\n", letters);
    printf("Digits: %d\n", digits);
    printf("Special Characters / Symbols: %d\n", specials);
}

int main() {
    char str[100];
    printf("Input: "); scanf("%[^\n]", str);
    printf("Output:\n");
    countChars(str);
}
