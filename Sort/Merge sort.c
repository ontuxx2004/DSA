#include <stdio.h>

int main() {
    int A[] = {38, 27, 43, 3, 9, 82, 10};
    int n = 7;
    int i, j, k, mid, left, right;
    int temp[10];

    int width, lo, hi, m;

    for (width = 1; width < n; width = width * 2) {


        for (lo = 0; lo < n; lo = lo + 2 * width) {


            m = lo + width - 1;
            hi = lo + 2 * width - 1;

            if (m >= n - 1) m = n - 1;
            if (hi >= n - 1) hi = n - 1;


            left = lo;
            right = m + 1;
            k = lo;

            while (left <= m && right <= hi) {
                if (A[left] <= A[right]) {
                    temp[k] = A[left];
                    left++;
                } else {
                    temp[k] = A[right];
                    right++;
                }
                k++;
            }


            while (left <= m) {
                temp[k] = A[left];
                left++;
                k++;
            }


            while (right <= hi) {
                temp[k] = A[right];
                right++;
                k++;
            }

            for (i = lo; i <= hi; i++) {
                A[i] = temp[i];
            }
        }

        printf("Pass (width=%d): ", width);
        for (i = 0; i < n; i++)
            printf("%d ", A[i]);
        printf("\n");
    }


    printf("\nSorted Array: ");
    for (i = 0; i < n; i++)
        printf("%d ", A[i]);
    printf("\n");

    return 0;
}

