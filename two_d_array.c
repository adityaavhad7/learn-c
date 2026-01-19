#include <stdio.h>

int main() {
    int arr[3][3];
    int i, j, sum = 0;

    // Input elements
    printf("Enter elements of 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];
        }
    }

    // Display matrix
    printf("\nMatrix elements:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Sum of all elements
    printf("\nSum of all elements = %d", sum);

    return 0;
}
