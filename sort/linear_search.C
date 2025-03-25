#include <stdio.h>
int main() {
    int arr[10], target, found = 0;
    int n = 10;
    printf("Enter 10 integers:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
        
    printf("Enter element to search: ");
    scanf("%d", &target);
    
    for (int i = 0; i < n; i++) {
        if(arr[i] == target) {
            printf("Element found at index %d\n", i);
            found = 1;
            break;
        }
    }
    if (!found)
        printf("Element not found.\n");
    return 0;
}
