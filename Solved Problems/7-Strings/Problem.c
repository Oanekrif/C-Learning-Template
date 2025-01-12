#include <stdio.h>
#include <string.h>

void Problem1();
void Problem2();

int main()
{
    //Problem1();
    Problem2();
}

void Problem1(){
    char name[] = "Omar";
    char *ptr1 = name; //or *ptr1 = "omar"
    char(*ptr2)[5] = &name;
    printf("First character: %c\n", *ptr1);
    printf("Second character: %c\n", *(ptr1 + 1));
    printf("Third character: %c\n", *(ptr1 + 2));
    printf("Fourth character: %c\n", *(ptr1 + 3));
    printf("The whole string: %s\n", ptr1);
    printf("-----------------\n");
    printf("First character: %c\n", (*ptr2)[0]);
    printf("Second character: %c\n", (*ptr2)[1]);
    printf("Third character: %c\n", (*ptr2)[2]);
    printf("Fourth character: %c\n", (*ptr2)[3]);
    printf("The whole string: %s\n", *ptr2);
}
void Problem2() {
    char str[100];
    char *ptr1, *ptr2;
    int len;
    fputs("Enter your string: ", stdout);
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    len = strlen(str);
    fputs("The length of your string is: ", stdout);
    char lenStr[10];
    snprintf(lenStr, sizeof(lenStr), "%d", len);
    fputs(lenStr, stdout);
    fputs("\n", stdout);
    ptr1 = str;
    ptr2 = str + len - 1;
    while (ptr1 < ptr2) {
        char tmp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = tmp;
        ptr1++;
        ptr2--;
    }
    fputs("The reverse of your string is: ", stdout);
    fputs(str, stdout);
    fputs("\n", stdout);
}
