#include <stdio.h>
int main() {
    int a[3][3], b[3][3], sum[3][3];
    printf("Enter elements for Matrix A (3x3):\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements for Matrix B (3x3):\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &b[i][j]);

    printf("Sum of matrices:\n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
