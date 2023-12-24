#include <stdio.h>

void findUnion(int arr1[], int n, int arr2[], int m) {
    int i = 0, j = 0;

    printf("Output: ");
    while (i < n || j < m) {
        if ((i < n && arr1[i] < arr2[j]) || (i < n && i > 0 && arr1[i] == arr1[i - 1])) {
            i++;
        } else if ((j < m && arr1[i] > arr2[j]) || (j < m && j > 0 && arr2[j] == arr2[j - 1])) {
            j++;
        } else {
            printf("%d ", arr1[i]);
            i++;
            j++;
        }
    }

    printf("\n");
}

int main() {
    int n, m;
    printf("Enter the size of the 1st array: ");
    scanf("%d", &n);
    int arr1[n];
    printf("Enter the elements of the 1st array : ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("\nEnter the size of the 2nd array: ");
    scanf("%d", &m);
    int arr2[m];
    printf("Enter the elements of the 2nd array: ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr2[i]);
    }
    findUnion(arr1, n, arr2, m);

    return 0;
}

