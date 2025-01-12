#include <stdio.h>

void modifyValue1(int a);
void modifyValue2(int *a);
void Problem1();
void Problem2();

int main() {
    //Problem1();
    Problem2();
}

void modifyValue1(int a) {
    a = a + 10;
    printf("Inside function: a = %d\n", a);
}
void modifyValue2(int *a) {
    *a = *a + 10;
    printf("Inside function: *a = %d\n", *a);
}
void Problem1(){
    int x = 5;
    printf("------func 1------\n");
    printf("Before function call: x = %d\n", x);
    modifyValue1(x);
    printf("After function call: x = %d\n", x);
    printf("------func 2------\n");
    printf("Before function call: x = %d\n", x);
    modifyValue2(&x);
    printf("After function call: x = %d\n", x);
}

void Problem2(){
    int a = 10;
    int *ptr1 = &a;
    int **ptr2 = &ptr1;
    printf("-----value----\n");
    printf("a     : %d\n",a);
    printf("*ptr1 : %d\n",*ptr1);
    printf("**ptr2: %d\n",**ptr2);
    printf("----address----\n");
    printf("&a   : %d\n",&a);
    printf("ptr1 : %d\n",ptr1);
    printf("*ptr2: %d\n",*ptr2);
}