#include <stdio.h>

int main() {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    int arr[n];
    printf("Nhap cac phan tu:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    int count = 0;

    for (int i = 0; i < n / 2; i++) {
        if (arr[i] == arr[n - 1 - i]) {
            printf("Cap doi xung: (%d, %d)", arr[i], arr[n - 1 - i]);
            count = 1;
        }
    }

    if (!found) {
        printf("Khong co cap phan tu doi xung");
    }

}

