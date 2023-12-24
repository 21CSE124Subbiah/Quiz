#include <stdio.h>
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("After swap By Value \n%d,%d\n", a, b);
}

void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("After swap By Reference \n%d, %d\n", *a, *b);
}

int main() {
    int num1, num2,num3,num4;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Before swapping: \n%d, %d\n", num1, num2);
    swapByValue(num1, num2);
    printf("\nEnter two numbers: ");
    scanf("%d %d", &num3, &num4);
    printf("Before swapping: \n%d, %d\n", num3, num4);
    swapByReference(&num3, &num4);
    return 0;
}

