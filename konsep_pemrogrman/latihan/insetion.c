#include <stdio.h>

int main() {
    int arr[10];
    
    // Input array elements
    printf("Enter 4 integers: ");
    for (int i = 0; i < 4; i++) {
        scanf("%d", &arr[i]);
    }

    // Insertion sorting
    for (int i = 1; i < 4; i++) {
        int key = arr[i];
        int j = i - 1;

        // Move elements greater than key to one position ahead
        while (j >= 0 && key < arr[j]) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }

    // Print sorted array
    printf("Sorted array: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
