#include <stdio.h>

void modifyArray(int *arr, int size) {
    printf("Array updated: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i] *= 2);
    printf("\n");
}

void modifyInt(int num) {
    printf("Integer doubled: %d\n", num * 2);
}

void modifyFloat(float num) {
    printf("Float doubled: %.2f\n", num * 2);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    modifyArray(arr, size);

    printf("Modified array: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n\n");

    int num1 = 5;
    printf("Original integer: %d\n", num1);
    modifyInt(num1);
    printf("Integer after modification: %d\n\n", num1);

    float num2 = 8.5;
    printf("Original float: %.2f\n", num2);
    modifyFloat(num2);
    printf("Float after modification: %.2f\n", num2);

    return 0;
}