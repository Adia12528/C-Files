#include <stdio.h>
int main() {
    int A[3][3], transpose[3][3];
    printf("Enter elements of 3x3 matrix:\n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            scanf("%d", &A[i][j]);
            transpose[j][i] = A[i][j];
        }
    }
    printf("Transpose of the matrix:\n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++)
            printf("%d ", transpose[i][j]);
        printf("\n");
    }
    return 0;
}
