#include <stdio.h>
#include <string.h>

void justify(char sentence[], int screenLength) {
    int length = strlen(sentence);
    int start = 0;

    for (int i = 0; i <= length; i++) {
        if (sentence[i] == ' ' || sentence[i] == '\0') {
            int wordLength = i - start;

            for (int j = 0; j < wordLength; j++) {
                printf("%c", sentence[start + j]);
            }

            if (i < length) {
                int needed = screenLength - length + 1;

                while (needed > 0) {
                    printf("*");
                    needed--;
                }
            }

            start = i + 1;
        }
    }
}

int main() {
    char sentence[100];
    int screenLength;

    printf("Enter the sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = '\0';

    printf("Enter the screen length: ");
    scanf("%d", &screenLength);

    printf("Output:\n");
    justify(sentence, screenLength);

    return 0;
}

