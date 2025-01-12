#include <stdio.h>

void zakat();
void time();
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int dividend, int divisor);

int main(){
    //zakat();
    //time();
    // int a,b;
    // printf("enter two integer: ");
    // scanf("%d",&a);
    // scanf("%d",&b);
    // printf("Addition: %d\n", add(a, b));
    // printf("Subtraction: %d\n", subtract(a, b));
    // printf("Multiplication: %d\n", multiply(a, b));
    // printf("Division: %d\n", divide(a, b));
}

void zakat(){
    const float zakat = 0.025;
    float money;
    printf("how mush mony you have? ");
    scanf("%f",&money);
    printf("the value of zakat you must give is: %.2f",money*zakat);
}
void time(){
    int val,h,min,s;
    printf("enter value on second: ");
    scanf("%d",&val);
    h = val/3600;
    min = (val%3600)/60;
    s = ((val%3600)%60);
    printf("%ds is: %dh %dmin %ds",val,h,min,s);
}

int add(int a, int b)
{
    while (b != 0)
    {
        int carry = a & b;
        a = a ^ b;
        b = carry << 1;
    }
    return a;
}

int subtract(int a, int b)
{
    return add(a, add(~b, 1));
}

int multiply(int a, int b)
{
    int result = 0;
    while (b != 0)
    {
        if (b & 1)
        {
            result = add(result, a);
        }
        a = a << 1;
        b = b >> 1;
    }
    return result;
}

int divide(int dividend, int divisor)
{
    int result = 0;
    int negative = 0;
    if (dividend < 0)
    {
        dividend = add(~dividend, 1);
        negative = !negative;
    }
    if (divisor < 0)
    {
        divisor = add(~divisor, 1);
        negative = !negative;
    }
    for (int i = 7; i >= 0; i--)
    {
        if ((dividend >> i) >= divisor)
        {
            dividend = subtract(dividend, divisor << i);
            result = result | (1 << i);
        }
    }
    return negative ? add(~result, 1) : result;
}
