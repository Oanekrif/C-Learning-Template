// C program to illustrate the relational operators
#include <stdio.h>
int main()
{
    int a = 25, b = 5;
    printf("a < b  : %d\n", a < b);
    printf("a > b  : %d\n", a > b);
    printf("a <= b : %d\n", a <= b);
    printf("a >= b : %d\n", a >= b);
    printf("a == b : %d\n", a == b);
    printf("a != b : %d\n", a != b);
    // a!=b and a=!b
    int a = 5, b = 6;
    if (a != b)
        printf("a and b are not equal.\n");
    int b = 0;  // false in a logical sense
    int a = !b; // a = 1 (true), because !0 is 1
}