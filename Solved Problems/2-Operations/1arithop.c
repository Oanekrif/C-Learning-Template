// C program to illustrate the arithmatic operators
#include <stdio.h>
int main()
{
    int a = 25, b = 5;
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a % b = %d\n", a % b);
    printf("+a    = %d\n", +a);
    printf("-a    = %d\n", -a);
    printf("a++   = %d\n", a++);
    printf("a--   = %d\n", a--);
    // ++a and a++
    a = 5;
    b = a++;  // b = 5, a = 6
    a = 5;
    b = ++a;  // a = 6, b = 6
    b=c=10;
    a=b++;    // a==10
    a=++c;    // a==11
}