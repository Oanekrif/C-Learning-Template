#include <stdio.h>
#include <stdlib.h>

void Swap(int *x, int *y);
float Add(float a,float b){return a+b;}
float Sub(float a,float b){return a-b;}
float Mul(float a,float b){return a*b;}
float Div(float a,float b){if(b==0){printf("Error: Div by zero!!!!\n");exit(1);} return a/b;}
void Problem1(void);
void Problem2();

int main(){
    //Problem1();
    //Problem2();
}

void Swap(int *x, int *y){
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

void Problem1(void){
    int a=5,b=10;
    void (*ptr)(int*,int*) = Swap;
    printf("Value before swap:\na = %d, b = %d\n",a,b);
    ptr(&a,&b);
    printf("Value after swap: \na = %d, b = %d\n",a,b);
}

void Problem2()
{
    float (*ptr[4])(float,float) = {Add,Sub,Mul,Div}, a,b;
    int choice;
    printf("Enter your operator:\n0 for Addition (+)\n1 for Subtraction (-)\n2 for Multiplication (*)\n3 for Division (/)\nEnter your choice: ");
    scanf("%d",&choice);
    if(choice<0 || choice>3){printf("Invalid choice!!!\n");exit(1);}
    printf("Enter a: ");
    scanf("%f",&a);
    printf("Enter b: ");
    scanf("%f",&b);
    printf("The result for your operating is: %.2f\n",ptr[choice](a,b));
}