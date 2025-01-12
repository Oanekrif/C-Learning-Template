// C program to illustrate the logical operators
#include <stdio.h>
#include <iso646.h>
int main()
{
    int a = 25, b = 5;
    // using && || !
    printf("a && b : %d\n", a && b);
    printf("a || b : %d\n", a || b);
    printf("!a     : %d\n", !a);
    // using and or not
    printf("a and b: %d\n", a and b);
    printf("a or b : %d\n", a or b);
    printf("not a  : %d\n", not a);
    // exemple
    int a, b ;
    a = 5 ;
    b = 2 ;
    if (a > 0 && b > 0) 
        printf("Both a and b are positive.\n");
    else if(a > 0 || b > 0)
        printf("At least one of a or b is positive.\n");
}