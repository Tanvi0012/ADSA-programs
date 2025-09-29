#include<stdio.h>

int main() {
    int a[10] = {12, 34, 56, 23, 45, 67, 89, 10, 11, 90};
    int n = 10, i, j, sum = 0;

    for(i = 0; i < n; i++) {
        sum += a[i];
    }

    float average = (float)sum / n;
    printf("The average of the array elements is %.2f\n", average);

    return 0;
}