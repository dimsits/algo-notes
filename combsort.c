#include <stdio.h>

void main() {
    int arr[8] = {4, 76, 2, 53, 104, 2, 64, 90};

    combSort(&arr, 8);
}

int getNextGap(int gap) {
    int nextGap = (gap * 10) / 13;
    if (nextGap < 1) {
        return 1;
    } else {
        return nextGap;
    }
}

void combSort(int *arr, int n) {
    int gap = n;
    int swapped = 1;

    while (gap != 1 || swapped == 1) {
        gap = getNextGap(gap);

        int i;
        for (i = 0; i < n; i++) {
            if (arr[i] > arr[i + gap]) {
                int temp = arr[i + gap];
                arr[i + gap] = arr[i];
                arr[i] = temp;
            }
        }
    }
}