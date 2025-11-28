#include <stdio.h>

int binary_search(int arr[], int n, int x) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        // Menghindari overflow integer
        int mid = low + (high - low) / 2;

        if (arr[mid] == x) {
            return mid;
        }
        if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    // Array HARUS terurut
    int data_energi[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = sizeof(data_energi) / sizeof(data_energi[0]);
    int target = 72;

    int hasil = binary_search(data_energi, n, target);

    if (hasil != -1) {
        printf("Energi ditemukan pada indeks: %d\n", hasil);
    } else {
        printf("Energi tidak ditemukan.\n");
    }

    return 0;
}