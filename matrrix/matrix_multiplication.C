#include <stdio.h>
int main() {
    int a[2][3], b[3][2], product[2][2];
    
    printf("Enter elements for Matrix A (2x3):\n");
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);
            
    printf("Enter elements for Matrix B (3x2):\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 2; j++)
            scanf("%d", &b[i][j]);
            
    // Initialize and compute the product
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            product[i][j] = 0;
            for (int k = 0; k < 3; k++)
                product[i][j] += a[i][k] * b[k][j];
        }
    }
    
    printf("Product of matrices:\n");
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++)
            printf("%d ", product[i][j]);
        printf("\n");
    }
    return 0;
}
