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
    int searchVal;
    int findIndex = -1;
    printf("Nhap gia tri can tim");
    scanf("%d", &searchVal);
    for(int i = n - 1; i >= 0; i--) {
        if ( arr[i] == searchVal ) {
            findIndex = i;
            break;
        }
    }
    if (findIndex != -1) {
        printf("%d", findIndex);
    } else {
        printf("Khong tim thay phan tu");
    }
}


