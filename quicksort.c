#include <stdio.h>

void main() {
    int arr[8] = {4, 76, 2, 53, 104, 2, 64, 90};

    
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void lomuto(int *arr, int high, int low) {
    int pivot = arr[high];
    int i = low - 1; //index for smaller element
    int j = low;
    for (j; j <= high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        } 
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quicksortLomuto(*arr, int high, int low) {
    if (low < high) {
        int partition = lomuto(&arr, high, low);

        quicksortLomuto(&arr, low, partition - 1);
        quicksortLomuto(&arr, partition + 1, high);
    }
}


