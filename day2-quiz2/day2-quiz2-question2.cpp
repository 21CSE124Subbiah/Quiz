#include <stdio.h>
#include <ctype.h>

void expandString(const char *inputString) {
    int i = 0;

    while (inputString[i] != '\0') {
        char currentChar = inputString[i];

        if (isalpha(currentChar)) {
            int count = 0;
            while (isdigit(inputString[i + 1])) {
                count = count * 10 + (inputString[i + 1] - '0');
                i++;
            }

            for (int j = 0; j < count; j++) {
                printf("%c", currentChar);
            }
        }

        i++;
    }
}

int main() {
    char inputString[100];

    printf("Enter a string: ");
    scanf("%99[^\n]", inputString);  

    printf("Output: ");
    expandString(inputString);

    return 0;
}

