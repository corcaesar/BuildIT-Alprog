#include <stdio.h>

#define MAX_N 10000

void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int N, nilai[MAX_N];
    
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &nilai[i]);
    }
    
    quickSort(nilai, 0, N - 1);
    
    for (int i = 0; i < N; i++) {
        printf("%d\n", nilai[i]);
    }
    
    return 0;
}