#include <stdio.h>
#include <string.h>

char* CommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) return "";

    int len = strlen(strs[0]);
    for (int i = 1; i < strsSize; i++) {
        int j = 0;
        while (j < len && strs[0][j] == strs[i][j]) {
            j++;
        }
        len = j;
    }

    strs[0][len] = '\0';
    printf("Longest Common Prefix: %s\n", strs[0]);
}

int main() {
    int n;
    printf("Enter the number of strings: ");
    scanf("%d", &n);

    char strings[n][100];
    char* ptrs[n];

    printf("Enter the strings:\n");
    for (int i = 0; i < n; i++) {
        scanf("%s", strings[i]);
        ptrs[i] = strings[i];
    }
    CommonPrefix(ptrs, n);
    
    return 0;
}

