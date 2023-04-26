#include <stdio.h>

void bubble_sort(int arr[], int n);

int main() {
    int arr[5];
    printf("Enter 5 integers to sort in ascending order:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    bubble_sort(arr, 5);
    printf("Sorted array in ascending order: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

void bubble_sort(int arr[], int n) {
    int temp;
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
