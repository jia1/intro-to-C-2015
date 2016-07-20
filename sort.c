#include <stdio.h>

void bubbleSort(int array[], int length);
void selectSort(int array[], int length);
void insertSort(int array[], int length);

int main() {
    int number = 5;
    int arr[number];
    int i;
    for (i = 0; i < number; i++) {
        printf("Input: ");
        scanf("%d", &arr[i]);
    }
    // bubbleSort(arr, number);
    // selectSort(arr, number);
    // insertSort(arr, number);
    return 0;
}

void bubbleSort(int a[], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n-i; j++) {
            if (a[j] > a[j+1]) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void selectSort(int a[], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    for (i = 0; i < n; i++) {
        for (j = i+1; j < n; j++) {
            if (a[i] > a[j]) {
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void insertSort(int a[], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    for (i = 1; i < n; i++) {
        ;
    }
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
