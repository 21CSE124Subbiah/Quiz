#include <stdio.h>

int main() {
    int mat[3][3],n,i,j;
    printf("Enter the dimension of the matrix: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}

