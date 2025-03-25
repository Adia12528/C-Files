#include <stdio.h>
int main() {
    int a, b, tempA, tempB, gcd;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    tempA = a; 
    tempB = b;
    while (tempB != 0) {
        int temp = tempB;
        tempB = tempA % tempB;
        tempA = temp;
    }
    gcd = tempA;
    printf("LCM is %d\n", (a * b) / gcd);
    return 0;
}
