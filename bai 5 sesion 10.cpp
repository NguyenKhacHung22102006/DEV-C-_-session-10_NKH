#include <stdio.h>
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1, mid;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key) {
            return mid;
        }
        if (arr[mid] > key) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return -1; 
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {6, 3, 2, 2, 22, 1, 9};  
    int n = sizeof(arr) / sizeof(arr[0]);      
    int key, position;
    printf("Mang ban dau: ");
    printArray(arr, n);
    bubbleSort(arr, n);
    printf("Mang sau khi sap xep: ");
    printArray(arr, n);
    printf("Nhap phan tu can tim: ");
    scanf("%d", &key);
    position = binarySearch(arr, n, key);
    if (position != -1) {
        printf("Phan tu %d tim thay tai vi tri %d trong mang.\n", key, position);
    } else {
        printf("Phan tu %d khong ton tai trong mang.\n", key);
    }

    return 0;
}


