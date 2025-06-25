#include <stdio.h>

int main() {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    int arr[n];
    printf("Nhap cac phan tu:");
    for (int i = 0; i < n; i++) {
        printf("Phan tu [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    int searchNumber;
    printf("Nhap gia tri can tim: ");
    scanf("%d", &searchNumber);

    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == searchNumber) {
            printf("%d ", i);
            count = 1;
        }
    }
    if (!found) {
        printf("Phan tu khong co trong mang");
    }
}

