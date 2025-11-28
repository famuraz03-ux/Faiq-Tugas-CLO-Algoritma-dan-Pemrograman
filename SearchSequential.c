#include <stdio.h>

int sequential_search(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i; // Mengembalikan indeks
        }
    }
    return -1; // Data tidak ditemukan
}

int main() {
    int data_fisika[] = {10, 50, 30, 70, 80, 20};
    int n = sizeof(data_fisika) / sizeof(data_fisika[0]);
    int target = 50;

    int hasil = sequential_search(data_fisika, n, target);

    if (hasil != -1) {
        printf("Data ditemukan pada indeks: %d\n", hasil);
    } else {
        printf("Data tidak ditemukan.\n");
    }

    return 0;
}