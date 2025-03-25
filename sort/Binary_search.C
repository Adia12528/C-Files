#include <stdio.h>
int main() {
    int arr[10], target;
    int n = 10;
    printf("Enter 10 sorted integers:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
        
    printf("Enter element to search: ");
    scanf("%d", &target);
    
    int low = 0, high = n - 1, mid, found = -1;
    while (low <= high) {
        mid = (low + high) / 2;
        if(arr[mid] == target) {
            found = mid;
            break;
        } else if(arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    if(found != -1)
        printf("Element found at index %d\n", found);
    else
        printf("Element not found.\n");
    return 0;
}
