#include <stdio.h>

void Problem1();
void Problem2();
void Problem3();

int main(){
    //Problem1();
    //Problem2();
    //Problem3();
}

void Problem1(){
    int arr[2][3] = {{1,2,3},{4,5,6}};
    printf("%p\n%p\n%p\n%p\n",arr,*arr,arr[0],&arr[0][0]);
    printf("------------------\n");
    printf("%d\n%d\n%d\n%d\n",**arr,***&arr,*arr[0],arr[0][0]);
}

void Problem2(){
    int arr[3][4] = {{10,11,12,13},{14,15,16,17},{18,19,20,21}};
    int (*_arr)[3][4] = &arr;
    int k=0;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            printf("%d ",*(**_arr + k));
            k++;
        }
        printf("\n");
    }
    printf("------------\n");
    int sum;
    k = 0;
    for(int i=0; i<3; i++){
        sum = 0;
        for(int j=0; j<4; j++){
            sum += *(**_arr+k);
            k++;
        }
        printf("the sum of row %d: %d\n",i+1,sum);
    }
    printf("------------\n");
    int max;
    for(int i=0; i<4; i++){
        max = **(*_arr+i);
        for(int j=0; j<3; j++){
            if(max < (*(*(*_arr + j) + i))){
                max = *(*(*_arr + j) + i);
            }
        }
        printf("the max of colome %d: %d\n",i+1,max);
    }
}

void Problem3() {
    int arr[3][4] = {{10, 11, 12, 13}, {14, 15, 16, 17}, {18, 19, 20, 21}};
    int (*_arr)[4] = arr;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", _arr[i][j]);
        }
        printf("\n");
    }
    printf("------------\n");
    for (int i = 0; i < 3; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            sum += _arr[i][j];
        }
        printf("The sum of row %d: %d\n", i + 1, sum);
    }
    printf("------------\n");
    for (int j = 0; j < 4; j++) {
        int max = _arr[0][j];
        for (int i = 1; i < 3; i++) {
            if (_arr[i][j] > max) {
                max = _arr[i][j];
            }
        }
        printf("The max of column %d: %d\n", j + 1, max);
    }
}
