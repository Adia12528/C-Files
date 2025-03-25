#include <stdio.h>

int main() {
    int a = 10;     // Declare an integer variable
    int *p;         // Declare a pointer variable

    p = &a;         // Assign the address of 'a' to the pointer 'p'

    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", &a);
    printf("Value of pointer p: %p\n", p);
    printf("Value pointed to by p: %d\n", *p);

    *p = 20;        // Modify the value of 'a' using the pointer
    printf("New value of a: %d\n", a);

    return 0;
}