#include <stdio.h>
#include <string.h>
char* mappings[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
void Combinations(char* digits) {
    if (*digits == '\0') {
        return;
    }
    char result[100][3]; 
    int returnSize = 0;

    for (int i = 0; digits[i] != '\0'; i++) {
        int digit = digits[i] - '0';
        char* letters = mappings[digit];
        
        if (returnSize == 0) {
            for (int j = 0; j < strlen(letters); j++) {
                result[j][0] = letters[j];
                result[j][1] = '\0';
            }
            returnSize = strlen(letters);
        } else {
            char temp[100][3];
            int tempSize = 0;

            for (int j = 0; j < returnSize; j++) {
                for (int k = 0; k < strlen(letters); k++) {
                    sprintf(temp[tempSize], "%s%c", result[j], letters[k]);
                    tempSize++;
                }
            }

            for (int j = 0; j < tempSize; j++) {
                strcpy(result[j], temp[j]);
            }

            returnSize = tempSize;
        }
    }
    printf("Output: [");
    for (int i = 0; i < returnSize; i++) {
        printf("\"%s\"", result[i]);
        if (i < returnSize - 1) {
            printf(",");
        }
    }
    printf("]\n");
}
int main() {
    char digits[100];

    printf("Enter the digits: ");
    scanf("%s", digits);
    Combinations(digits);
    return 0;
}

