#include <stdio.h>
using namespace std;

int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf("  ");
        }
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == i)
            {
                printf("%d ", 1);
            }
            else
            {
                printf("%d ", 0);
            }
        }
        printf("\n");
    }
    return 0;
}