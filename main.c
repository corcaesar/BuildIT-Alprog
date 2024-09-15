#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            // Tukar jika elemen saat ini lebih besar dari yang berikutnya
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int N;
    scanf("%d",&N);  // Input jumlah nilai

    int nilai[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &nilai[i]);  // Input nilai
    }

    bubbleSort(nilai, N);  // Urutkan nilai

    for (int i = 0; i < N; i++) {
        printf("%d\n", nilai[i]);  // Output nilai terurut
    }

    return 0;
}