#include <stdio.h>
int main() {
    int n;
    printf("Nhap so phan tu can nhap: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    int searchNumber;
    printf("Nhap gia tri can tim: ");
    scanf("%d", &searchNumber);

    int left = 0;
    int right = n - 1;
    int count = 0;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == searchNumber) {
            count = 1;
            break;
        } else if (arr[mid] < searchNumber) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    if (count) {
        printf("Tim thay");

    } else {
        printf("Khong tim thay");
    }
}