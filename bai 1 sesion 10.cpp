#include <stdio.h>
int main() {
    int n, i, searchElement , position = -1;
    int arr[] = {10, 20, 30, 40, 50, 60, 70}; 
    n = sizeof(arr) / sizeof(arr[0]);
    printf("Nhap phan tu can tim: ");
    scanf("%d", &searchElement);
    for (i = 0; i < n; i++) {
        if (arr[i] == searchElement) {
            position = i; 
            break; 
        }
    }
    if (position != -1) {
        printf("Phan tu %d tim thay tui vi tri %d trong mang.\n",searchElement, position);
    } else {
        printf("Phan tu %d khong ton tai trong mang.\n",searchElement );
    }
    return 0;
}
