#include <stdio.h>
using namespace std;
int main()
{
    int a,b;
    char op;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Enter the operator:(+,-,*,/) ");
    scanf(" %c",&op);
    switch(op)
    {
        case '+':
            printf("%d + %d = %d",a,b,a+b);
            break;
        case '-':
            printf("%d - %d = %d",a,b,a-b);
            break;
        case '*':
            printf("%d * %d = %d",a,b,a*b);
            break;
        case '/':
            printf("%d / %d = %d",a,b,a/b);
            break;
        default:
            printf("Invalid operator");
    }
    return 0;
}
 