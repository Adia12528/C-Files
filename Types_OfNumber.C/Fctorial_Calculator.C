#include <stdio.h>
using namespace std;
int main()
{
    int sum = 0, num1, num2;
    for (int i = 0; i < 13; i++) {
        printf("Enter two numbers: ");
        scanf("%d %d", &num1, &num2);
        sum += num1 + num2;
    }
    printf("Sum of all numbers is %d", sum);
    return 0;
}