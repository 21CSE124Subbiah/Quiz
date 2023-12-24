#include<stdio.h>

int secondlarge(int arr[],int size,int max, int secondmax){
	
	 for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            secondmax = max;
            max = arr[i];
        } else if (arr[i] > secondmax && arr[i] != max) {
            secondmax = arr[i];
        }
    }
	printf("second largest number=%d", secondmax);	
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
    int max=-1;
    int secondmax=-1;
    secondlarge(nums, size, max,secondmax);
    

    return 0;
	
}
