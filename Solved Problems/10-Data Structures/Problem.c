#include <stdio.h>
#include <stdlib.h>

struct Car
{
    char *mark;
    char *color;
    int price;
};

typedef struct{
    int a;
    char b;
    float c;
} data;

struct point {
    int x;
    int y;
};

struct rectangle {
    struct point upper_left ;
    struct point lower_right;
};

int area(struct rectangle r){
    int length, breadth;
    length = r.lower_right.x - r.upper_left.x;
    breadth = r.upper_left.y - r.lower_right.y;
    return length*breadth;
}

void Problem1();
void Problem2();
void Problem3();

int main()
{
    //Problem1();
    //Problem2();
    //Problem3();
}

void Problem1()
{
    int n;
    printf("How many cars do you have? ");
    scanf("%d", &n);

    // Allocate memory for 'n' cars dynamically
    struct Car *c = (struct Car *)malloc(n * sizeof(struct Car));
    if (c == NULL)
    {
        printf("Memory allocation failed!\n");
        return;
    }

    // Allocate memory for mark and color of each car
    for (int i = 0; i < n; i++)
    {
        c[i].mark = (char *)malloc(50 * sizeof(char));  // 50 characters for the mark
        c[i].color = (char *)malloc(50 * sizeof(char)); // 50 characters for the color
        if (c[i].mark == NULL || c[i].color == NULL)
        {
            printf("Memory allocation for mark or color failed!\n");
            free(c);
            return;
        }

        // Use pointers to access and scan the details of each car
        struct Car *car_ptr = &c[i]; // Pointer to the current car struct

        printf("What is the mark of car %d: ", i + 1);
        scanf("%s", car_ptr->mark); // Using pointer to scan mark

        printf("What is the color of car %d: ", i + 1);
        scanf("%s", car_ptr->color); // Using pointer to scan color

        printf("What is the price of car %d: ", i + 1);
        scanf("%d", &car_ptr->price); // Using pointer to scan price
    }

    printf("------------------------\n");
    for (int i = 0; i < n; i++)
    {
        struct Car *car_ptr = &c[i]; // Pointer to the current car struct
        // Using pointers to print the details of each car
        printf("The details of car %d are:\n", i + 1);
        printf("Mark: %s\n", car_ptr->mark);     // Using pointer to print mark
        printf("Color: %s\n", car_ptr->color);   // Using pointer to print color
        printf("Price: %d\n\n", car_ptr->price); // Using pointer to print price

        // Free the dynamically allocated memory for mark and color
        free(car_ptr->mark);
        free(car_ptr->color);
    }

    // Free the memory allocated for the array of cars
    free(c);
}

void Problem2(){
    data arr[10];
    arr[0].a = 10;
    arr[1].b = 'a';
    arr[2].c = 66.178;
    printf("int: %d\nchar: %c\ndouble: %f\n",arr[0].a,arr[1].b,arr[2].c);
}

void Problem3(){
    struct rectangle r;
    printf("Enter the upper left coordinates of the rectangle: \n");
    scanf("%d %d", &r.lower_right.x, &r.lower_right.y);
    printf("Enter the lower right coordinates of the rectangle: \n");
    scanf("%d %d", &r.upper_left.x, &r.upper_left.y);
    printf("Area of rectangle: %d\n",area(r));
    //    3  8  \
          14 2  \
        => 66
}