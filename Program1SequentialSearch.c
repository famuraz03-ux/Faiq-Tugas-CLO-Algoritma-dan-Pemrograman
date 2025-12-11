#include <stdio.h>

int sequentialsearch(int A[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (A[i] == x) {
            return i;
        }
    }
    return -1;
}

int main() {
    int A[] = {10, 50, 30, 70, 80, 20};
    int n = sizeof(A) / sizeof(A[0]);
    int x = 30;
    int hasil = sequentialsearch(A, n, x);

    if (hasil != -1) {
        printf("Nilai %d ditemukan pada indeks ke-%d\n", x, hasil);
    } else {
        printf("Nilai %d tidak ditemukan dalam array\n", x);
    }

    return 0;
}