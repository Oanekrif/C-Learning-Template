#include <stdio.h>

void forM_Table();
void whileM_Table();
void forAdd();
void forMult();
void whileAdd();
void whileMult();

int main()
{
    //forM_Table();
    //forAdd();
    //forMult();
    //whileM_Table();
    //whileAdd();
    //whileMult();
}

void forM_Table()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i = 1; i <= 10; i++)
        printf("%d * %d = %d\n", num, i, num * i);
    printf("end\n");
}

void whileM_Table(){
    int num,i=1;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(i<=10){
        printf("%d * %d = %d\n",num,i,num*i);
        i++;
    }
    printf("end\n");
}

void forAdd(){
    int num, c = 0;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(int i = 0; i<=num; i++){
        c = c + i;
    }
    printf("the sum of numbers from 0 to %d is: %d",num,c);
}

void forMult(){
    int num, c = 1;
    printf("enter a number: ");
    scanf("%d",&num);
    for(int i = 1; i<=num; i++){
        c = c*i;
    }
    printf("the multiplication of numbers from 1 to %d (%d!) is: %d",num,num,c);

}

void whileAdd(){
    int i=0,c=0,num;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(i<=num){
        c = c + i;
        i++;
    }
    printf("the sum of numbers from 0 to %d is: %d",num,c);
}

void whileMult(){
    int i=1,c=1,num;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(i<=num){
        c = c*i;
        i++;
    }
    printf("the multiplication of numbers from 1 to %d (%d!) is: %d",num,num,c);
}