#include<stdio.h>

int main(){
	    int size,sum;
	    int present=0;
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    printf("Enter the X: ");
    scanf("%d", &sum);

    int nums[100];

    printf("Enter the elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }
    
    for(int i=0;i<size;i++){
    	for(int j=1;j<size;j++){
    		if(nums[i]+nums[j]==sum){
    			present=1;
			}
		}
	}
	if(present==1){
		printf("Yes");
	}
	else{
		printf("No");
	}
    
    return 0;
}
