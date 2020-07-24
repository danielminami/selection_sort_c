#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int size) {
    int i=0, j=0, k=0;
    for (i=0; i<size-1; i++) {
        for (j=k=i; j<size; j++) {
            if (arr[j] < arr[k]) {
                k = j;
            }
        }
        swap(&arr[i], &arr[k]);
    }
    
}

void printArray(int arr[], int size) {
    for (int i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    
    int arr[] = {10, 44, 2, 4, 14, 3, 4, 5, 1, 90};
    int size = sizeof(arr)/sizeof(int);
    selectionSort(arr, size);
    printArray(arr, size);
    
    exit(0);
}