#include <stdio.h>
#include <stdlib.h>

int incrementLargeInteger(int* array, int arraySize) {
    int carry = 1;
    int returnSize = arraySize;

    for (int i = arraySize - 1; i >= 0; i--) {
        int sum = array[i] + carry;
        array[i] = sum % 10;
        carry = sum / 10;

        if (carry == 0) break;
    }

    if (carry > 0) {
        (returnSize)++;
        array = (int*)realloc(array, returnSize * sizeof(int));
        array[0] = carry;
    }
    for (int i = 0; i < returnSize; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
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
    incrementLargeInteger(digits, size);

    return 0;
}

