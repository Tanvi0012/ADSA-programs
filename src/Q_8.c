#include <stdio.h>

int main() {
    int a[10] = {12, 34, 56, 23, 45, 67, 89, 10, 11, 90};
    int sum = 0;

    for (int i = 0; i < 10; i++) {
        sum += a[i];
    }

    float average = sum / 10.0;
    printf("The average of the array is %.2f\n", average);

    return 0;
}