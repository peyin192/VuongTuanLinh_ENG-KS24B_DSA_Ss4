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
    int searchNumber;
    printf("Nhap phan tu can tim");
    scanf("%d", &searchNumber);
    for (int i = 0; i < n; i++) {
        if (arr[i] == searchNumber) {
        printf("Phan tu can tim %d", i );
    } else {
        printf("Khong tim thay");
    }
}