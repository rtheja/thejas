#include <stdio.h>

int main() {
    int arr[5] = {3, 7, 1, 9, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int min = arr[0], max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Minimum element in the array: %d\n", min);
    printf("Maximum element in the array: %d\n", max);

    return 0;
}
