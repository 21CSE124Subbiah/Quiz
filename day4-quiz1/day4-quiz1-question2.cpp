#include<stdio.h>

int repeat(int arr[], int size) {
    int count[size];
    int duplicateFound = 0;

    for (int i = 0; i < size; i++) {
        count[i] = 0;
    }

    printf("Output: ");
    for (int i = 0; i < size; i++) {
        count[arr[i]]++;

        if (count[arr[i]] == 2) {
            if (duplicateFound > 0) {
                printf(" ");
            }
            printf("%d", arr[i]);
            duplicateFound++;
        }
    }

    if (duplicateFound == 0) {
        printf("-1");
    }

    printf("\n");
}

int main(){
	    int size;
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int nums[100];

    printf("Enter the elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }
    
    int result = repeat(nums, size);
    printf("%d", result);

    return 0;
	
}

