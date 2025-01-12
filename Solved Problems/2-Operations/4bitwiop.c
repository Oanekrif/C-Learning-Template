// C program to illustrate the bitwise operators
#include <stdio.h>
int main()
{
    // &
    int a = 5;          // Binary: 0101
    int b = 3;          // Binary: 0011
    int result = a & b; // Result: 0001 (decimal 1)
    // |
    int a = 5;          // Binary: 0101
    int b = 3;          // Binary: 0011
    int result = a | b; // Result: 0111 (decimal 7)
    // ^
    int a = 5;          // Binary: 0101
    int b = 3;          // Binary: 0011
    int result = a ^ b; // Result: 0110 (decimal 6)
    // ~
    int a = 5;       // Binary: 00000000 00000000 00000000 00000101
    int result = ~a; // Result: 11111111 11111111 11111111 11111010 (decimal -6 in 2's complement)
    // <<
    int a = 5;           // Binary: 00000101
    int result = a << 1; // Result: 00001010 (decimal 10)
    // >>
    int a = 5;           // Binary: 00000101
    int result = a >> 1; // Result: 00000010 (decimal 2)
}