#include <stdio.h>
void linearSearch(int arr[], int n, int key) {
    int positions[n];  
    int count = 0;   
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            positions[count] = i; 
            count++; 
        }
    }
    if (count > 0) {
        printf("Phan tu %d duoc tim thay tai vi tri: ", key);
        for (int i = 0; i < count; i++) {
            printf("%d ", positions[i]);
        }
        printf("\n");
    } else {
        printf("Phan tu %d khong ton tai trong mang.\n", key);
    }
}
int main() {
    int arr[] = {10, 20, 30, 20, 40, 50, 20};  
    int n = sizeof(arr) / sizeof(arr[0]);     
    int key;
    printf("Nhap phan tu can tim: ");
    scanf("%d", &key);
    linearSearch(arr, n, key);
    return 0;
}


