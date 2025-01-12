#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void inputArray(int array[], int *size);
void outputArray(int array[], int size);

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    int array[100];
    int size;

    inputArray(array, &size);
    outputArray(array, size);

    return 0;
}

// Hàm nhập mảng
void inputArray(int array[], int *size) {
    printf("\nNhập kích thước của mảng: ");
    scanf("%d", size);

    printf("\nNhập %d phần tử cho mảng:", *size);
    for (int i = 0; i < *size; i++) {
        printf("\nNhập phần tử thứ %d: ", i + 1);
        scanf("%d", &array[i]);
    }
}


void outputArray(int array[], int size) {
    printf("\nMảng đã nhập là:");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}
