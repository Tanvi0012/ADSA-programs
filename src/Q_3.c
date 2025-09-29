#include<stdio.h>

int main() {
    int a[10] = {12, 34, 23, 45, 67, 89, 11, 22, 33, 44};
    int sum = 0;

    for(int i = 0; i < 10; i++) {
        sum += a[i];
    }

    float average = sum / 10.0;
    printf("The average of the array elements is %.2f\n", average);

    return 0;
}