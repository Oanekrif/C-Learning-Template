// C program to illustrate the other operators
#include <stdio.h>
int main(){
    int x,y,a,b;

    // sizeof()
    char arr[] = {1,4,2,5,9,7};
    int lengh_of_arr = sizeof(arr)/sizeof(arr[0]);
    printf("The size of x is :%d byte\n",sizeof(x));
    printf("the lengh od arr is :%d\n",lengh_of_arr);

    // ,
    x = (a=2,b=3);
    printf("x = %d\n",x);
    x = (y = 3, y + 2);
    printf("x = %d, y = %d\n", x, y);
    printf("%d\n", (x, y));
    y = (x++, ++x);
    printf("%d\n", y);

    x = 10;
    y = (x++, printf("x = %d\n", x), ++x,printf("x = %d\n", x), x++);
    printf("y = %d\n", y);
    printf("x = %d\n", x);

    for (int i = 0, j = 10; i < j; i++, j--) {
    printf("i = %d, j = %d\n", i, j);
    }

    // ?:
    a = 10, b = 20;
    int max = (a > b) ? a : b;
    printf("Max = %d\n", max);
    int num = 5;
    char *result = (num % 2 == 0) ? "Even" : "Odd";  // شرط يحدد إذا كان الرقم زوجيًا أم فرديًا
    printf("%d is %s\n", num, result);

    // (new_type) operand;
    printf("%d\n",x);
    printf("%.2f\n",x);
    printf("%.2f",(float)x);
}