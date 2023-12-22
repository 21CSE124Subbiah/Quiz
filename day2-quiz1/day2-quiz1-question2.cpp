#include <stdio.h>

void occurence(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int count = 1;
        while ((i + 1) < n && arr[i] == arr[i + 1]) {
            count++;
            i++;
        }
        if (count > 1) {
            printf("%d->%d\n", arr[i], count);
            if (i < n - 1 && arr[i] == arr[i + 1]) {
                printf(",");
            }   
        }
    }
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the sorted array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Output:\n");
    occurence(arr, n);

    return 0;
}

