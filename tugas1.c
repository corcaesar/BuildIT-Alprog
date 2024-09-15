#include <stdio.h>

// Fungsi untuk mengurutkan array menggunakan insertion sort
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        
        // Pindahkan elemen arr[0..i-1], yang lebih besar dari key,
        // ke satu posisi di depan posisi saat ini
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int N;
    printf("Masukkan jumlah nilai: ");
    scanf("%d", &N);  // Input jumlah nilai

    int nilai[N];
    printf("Masukkan nilai-nilai:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &nilai[i]);  // Input nilai
    }

    insertionSort(nilai, N);  // Urutkan nilai

    printf("Nilai setelah diurutkan:\n");
    for (int i = 0; i < N; i++) {
        printf("%d\n", nilai[i]);  // Output nilai terurut
    }

    return 0;
}
