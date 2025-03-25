#include <stdio.h>
using namespace std;

/**
 * @brief      Main function
 *
 * @details    This program takes two numbers from the user and displays their
 *             sum
 *
 * @return     0
 */
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Sum of two numbers is %d",a+b);
    return 0;
}