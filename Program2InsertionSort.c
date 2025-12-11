#include <stdio.h>

void insertionsort(int A[], int n) {
    int i, j, kunci;
    for (i = 1; i < n; i++) {
        kunci = A[i];
        j = i - 1;

        while (j >= 0 && A[j] > kunci) {
            A[j + 1] = A[j];
            j = j - 1;
        }
        A[j + 1] = kunci;
    }
}

void printarray(int A[], int ukur) {
    int i;
    for (i = 0; i < ukur; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int main() {
    int A[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(A) / sizeof(A[0]);

    printf("Array sebelum diurutkan: \n");
    printarray(A, n);

    insertionsort(A, n);

    printf("Array yang telah diurutkan secara menaik: \n");
    printarray(A, n);

    return 0;
}