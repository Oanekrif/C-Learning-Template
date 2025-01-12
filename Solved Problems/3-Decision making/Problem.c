#include <stdio.h>

// Day and Month Finder
void DorMifelse();
void DorMswitch();
// Parity of number
void Parityifelse();
void Parityswitch();
void ParityTernary();
// Simple calc
void ifelseCalc();
void switchCalc();

int main()
{
    // DorMifelse();
    // DorMswitch();
    // Parityifelse();
    // Parityswitch();
    // ParityTernary();
    // ifelseCalc();
    // switchCalc();
}
void DorMifelse()
{
    int c, day, month;
    printf("enter 1 for day, and 2 for month: ");
    scanf("%d", &c);
    if (c == 1)
    {
        // day
        printf("Enter day number: ");
        scanf("%d", &day);
        if (day == 1)
        {
            printf("the day %d is monday\n", day);
        }
        else if (day == 2)
        {
            printf("the day %d is tuesday\n", day);
        }
        else if (day == 3)
        {
            printf("the day %d is wednesday\n", day);
        }
        else if (day == 4)
        {
            printf("the day %d is thursday\n", day);
        }
        else if (day == 5)
        {
            printf("the day %d is friday\n", day);
        }
        else if (day == 6)
        {
            printf("the day %d is saurday\n", day);
        }
        else if (day == 7)
        {
            printf("the day %d is sunday\n", day);
        }
        else
        {
            printf("Invalid day\n");
        }
    }
    else if (c == 2)
    {
        // month
        printf("Enter month number: ");
        scanf("%d", &month);
        if (month == 1)
        {
            printf("the month %d is january\n", month);
        }
        else if (month == 2)
        {
            printf("the month %d is february\n", month);
        }
        else if (month == 3)
        {
            printf("the month %d is march\n", month);
        }
        else if (month == 4)
        {
            printf("the month %d is april\n", month);
        }
        else if (month == 5)
        {
            printf("the month %d is may\n", month);
        }
        else if (month == 6)
        {
            printf("the month %d is june\n", month);
        }
        else if (month == 7)
        {
            printf("the month %d is july\n", month);
        }
        else if (month == 8)
        {
            printf("the month %d is august\n", month);
        }
        else if (month == 9)
        {
            printf("the month %d is september\n", month);
        }
        else if (month == 10)
        {
            printf("the month %d is october\n", month);
        }
        else if (month == 11)
        {
            printf("the month %d is november\n", month);
        }
        else if (month == 12)
        {
            printf("the month %d is desember\n", month);
        }
        else
        {
            printf("Invalid month\n");
        }
    }
    else
    {
        printf("Invalid number");
    }
}
void DorMswitch()
{
    int c, day, month;
    printf("enter 1 for day, and 2 for month: ");
    scanf("%d", &c);
    switch (c)
    {
    case 1: // day
        printf("Enter day number: ");
        scanf("%d", &day);
        switch (day)
        {
        case 1:
            printf("the day %d is monday\n", day);
            break;
        case 2:
            printf("the day %d is tuesday\n", day);
            break;
        case 3:
            printf("the day %d is wednesday\n", day);
            break;
        case 4:
            printf("the day %d is thursday\n", day);
            break;
        case 5:
            printf("the day %d is friday\n", day);
            break;
        case 6:
            printf("the day %d is saurday\n", day);
            break;
        case 7:
            printf("the day %d is sunday\n", day);
            break;
        default:
            printf("Invalid day\n");
            break;
        }
        break;
    case 2: // month
        printf("Enter month number: ");
        scanf("%d", &month);
        switch (month)
        {
        case 1:
            printf("the month %d is january\n", month);
            break;
        case 2:
            printf("the month %d is february\n", month);
            break;
        case 3:
            printf("the month %d is march\n", month);
            break;
        case 4:
            printf("the month %d is april\n", month);
            break;
        case 5:
            printf("the month %d is may\n", month);
            break;
        case 6:
            printf("the month %d is june\n", month);
            break;
        case 7:
            printf("the month %d is july\n", month);
            break;
        case 8:
            printf("the month %d is august\n", month);
            break;
        case 9:
            printf("the month %d is september\n", month);
            break;
        case 10:
            printf("the month %d is october\n", month);
            break;
        case 11:
            printf("the month %d is november\n", month);
            break;
        case 12:
            printf("the month %d is desember\n", month);
            break;
        default:
            printf("Invalid month\n");
            break;
        }
    default:
        printf("Invalid number");
        break;
    }
}
void Parityifelse()
{
    int num;
    printf("enter a number: ");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("the number %d is even", num);
    else if (num % 2 == 1)
        printf("the number %d is odd", num);
    else
        printf("Invalid value");
}
void Parityswitch()
{
    int num;
    printf("enter a number: ");
    scanf("%d", &num);
    switch (num % 2)
    {
    case 0:
        printf("the number %d is even", num);
        break;
    case 1:
        printf("the number %d is odd", num);
        break;
    default:
        printf("Invalid value");
        break;
    }
}
void ParityTernary()
{
    int num;
    printf("enter a number: ");
    scanf("%d", &num);
    (num % 2 == 0) ? printf("the number %d is even", num) : printf("the number %d is odd", num);
}
void ifelseCalc()
{
    float num1, num2;
    char op;
    printf("enter a = ");
    scanf("%f", &num1);
    printf("enter b = ");
    scanf("%f", &num2);
    printf("enter the operation (+,-,*,/): ");
    scanf(" %c", &op);
    if (op == '+')
    {
        printf("%.2f + %.2f = %.2f", num1, num2, num1 + num2);
    }
    else if (op == '-')
    {
        printf("%.2f - %.2f = %.2f", num1, num2, num1 - num2);
    }
    else if (op == '*')
    {
        printf("%.2f * %.2f = %.2f", num1, num2, num1 * num2);
    }
    else if (op == '/')
    {
        printf("%.2f / %.2f = %.2f", num1, num2, num1 / num2);
    }
    else
    {
        printf("invalide value");
    }
}
void switchCalc()
{
    float num1, num2;
    char op;
    printf("enter a = ");
    scanf("%f", &num1);
    printf("enter b = ");
    scanf("%f", &num2);
    printf("enter the operation (+,-,*,/): ");
    scanf(" %c", &op);
    switch (op)
    {
    case '+':
        printf("%.2f + %.2f = %.2f", num1, num2, num1 + num2);
        break;
    case '-':
        printf("%.2f - %.2f = %.2f", num1, num2, num1 - num2);
        break;
    case '*':
        printf("%.2f * %.2f = %.2f", num1, num2, num1 * num2);
        break;
    case '/':
        printf("%.2f / %.2f = %.2f", num1, num2, num1 / num2);
        break;
    default:
        printf("invalide value");
        break;
    }
}