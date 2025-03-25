#include <stdio.h>
using namespace std;

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    int temp = a;
    int rev = 0;
    while (temp != 0)
    {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    if (rev == a)
        printf("%d is a pallindrome number", a);
    else
        printf("%d is not a pallindrome number", a);
    return 0;
}