#include <stdio.h>

void binarySearch(int arr[], int size, int key) {
    int left = 0, right = size - 1, mid;
    int found = 0;

    while (left <= right) {
        mid = left + (right - left) / 2;
        if (arr[mid] == key) {
            printf("Element %d found at index %d.\n", key, mid);
            found = 1;
            break;
        } else if (arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if (!found) {
        printf("Element %d not found in the array.\n", key);
    }
}

int main() {
    int arr[] = {2, 3, 5, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;

    printf("Enter the element to search: ");
    scanf("%d", &key);

    binarySearch(arr, size, key);

    return 0;
}
