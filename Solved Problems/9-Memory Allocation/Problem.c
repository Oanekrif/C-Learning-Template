#include <stdio.h>
#include <stdlib.h>

int* input();
void handle_error();
void Problem1();
void Problem2();
void Problem3();

int main(){
    //Problem1();
    //Problem2();
    //Problem3();
}

int* input(){
    int *ptr,i;
    ptr = (int*)malloc(5*sizeof(int));
    printf("enter 5 num: ");
    for(i=0; i<5; i++)
        scanf("%d",ptr+i);
    return ptr;
}

void handle_error() {
    printf("Memory allocation failed. Exiting...\n");
    exit(1);
}

void Problem1(){
    int i,sum=0;
    int *ptr = input();
    for(i=0; i<5; i++)
        sum += *(ptr+i);
    printf("the sum is: %d",sum);
    free(ptr);
    ptr = NULL;
}

void Problem2(){
    int *numbers, i = 0, n, additional_numbers;
    char add_more;
    printf("How many integers do you want to enter? ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid number. Exiting...\n");
        return ;
    }
    numbers = (int*)calloc(n, sizeof(int));
    if (numbers == NULL) handle_error();
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", numbers + i);
    }
    printf("Do you want to add more numbers? (y for Yes, n for No): ");
    scanf(" %c", &add_more);
    if (add_more == 'y' || add_more == 'Y') {
        printf("How many additional numbers? ");
        scanf("%d", &additional_numbers);
        if (additional_numbers <= 0) {
            printf("No additional numbers entered. Exiting...\n");
            free(numbers);
            return ;
        }
        numbers = (int*)realloc(numbers, (n + additional_numbers) * sizeof(int));
        if (numbers == NULL) handle_error();
        printf("Enter the %d additional numbers:\n", additional_numbers);
        for (i = n; i < n + additional_numbers; i++) {
            printf("Number %d: ", i + 1);
            scanf("%d", numbers + i);
        }
        n += additional_numbers;
    }else{printf("No additional numbers entered. Exiting...\n");}
    printf("The numbers you entered are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", *(numbers + i));
    }
    printf("\n");
    free(numbers);
    numbers = NULL;
}

void Problem3(){
    int cols,rows,**arr;
    printf("how many row do you want: ");
    scanf("%d",&rows);
    printf("how many colums do you want: ");
    scanf("%d",&cols);
    arr = (int**)malloc(rows*sizeof(int*));
    arr = (int**)malloc(rows * sizeof(int*));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    for(int i=0; i<rows; i++){
        arr[i]=(int*)malloc(cols*sizeof(int));
        if (arr[i] == NULL) {
            printf("Memory allocation failed.\n");
            return ;
        }
    }
    printf("enter values: \n");
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            printf("arr[%d][%d] = ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("the values are: (matrix format)\n");
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0; i<rows; i++){
        free(arr[i]);
    }
    free(arr);
    arr=NULL;
    return ;
}