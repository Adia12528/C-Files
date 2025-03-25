#include <stdio.h>
using namespace std;
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    for(int i=2;i<=a/2;i++)
    {
        if(a%i==0)
        {
            printf("%d is not a prime number",a);
            return 0;
        }
    }
    printf("%d is a prime number",a);
    return 0;
}