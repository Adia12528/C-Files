#include <stdio.h>
int main() {
    int arr[10], key, j;
    int n = 10;
    printf("Enter 10 integers:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
        
    for (int i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    
    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
