#include <stdio.h>

int main() {
    int A[] = {64, 34, 25, 12, 22, 11, 90};
    int n = 7;
    int i, j, temp, swapped;

    printf("Original Array: ");
    for (i = 0; i < n; i++)
        printf("%d ", A[i]);
    printf("\n\n");

    for (i = 0; i < n - 1; i++) {

        swapped = 0;

        for (j = 0; j < n - 1 - i; j++) {


            if (A[j] > A[j + 1]) {

                // SWAP
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;

                swapped = 1;
            }
        }


        printf("Pass %d: ", i + 1);
        for (int k = 0; k < n; k++)
            printf("%d ", A[k]);
        printf("\n");


        if (swapped == 0) {
            printf("Array already sorted! Early exit.\n");
            break;
        }
    }


    printf("\nSorted Array: ");
    for (i = 0; i < n; i++)
        printf("%d ", A[i]);
    printf("\n");

    return 0;
}
