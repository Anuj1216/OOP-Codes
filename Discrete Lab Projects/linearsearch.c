#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; // Return the index where the key is found
        }
    }
    return -1; // Return -1 if key is not found
}

int main() {
    int arr[] = {12, 34, 54, 2, 3, 76, 54, 23};
    int n = sizeof(arr);

    int key;
    printf("Enter the element to search for: ");
    scanf("%d", &key);

    int result = linearSearch(arr, n, key);

    if (result != -1) {
        printf("Element %d found at position %d\n", key, result + 1);
    } else {
        printf("Element %d not found in the array\n", key);
    }

    return 0;
}
