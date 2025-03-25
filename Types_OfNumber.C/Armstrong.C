#include <stdio.h>
using namespace std;
int main() {
    int n, rem, sum = 0, temp;
    printf("Enter the number: ");
    scanf("%d", &n);
    temp = n;
    while (n > 0) {
        rem = n % 10;
        sum = sum + (rem * rem * rem);
        n = n / 10;
    }
    if (temp == sum) {
        printf("Armstrong Number\n");
    } else {
        printf("Not an Armstrong Number\n");
    }
    return 0;
}