#include <stdio.h>
#include <stdbool.h>

bool Jump(int* array, int size) {
    int max = 0;

    for (int i = 0; i < size - 1; i++) {
        if (i + array[i] > max) {
            max = i + array[i];
        }

        if (max >= size - 1) {
            return true;
        }
    }

    return false;
}

int main() {
    int size;
    int digits[100];

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    printf("Enter the elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &digits[i]);
    }

    if (Jump(digits, size)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}

