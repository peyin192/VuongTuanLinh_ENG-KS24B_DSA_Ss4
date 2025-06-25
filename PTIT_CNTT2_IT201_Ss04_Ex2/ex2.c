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
    int maxVal = arr[0];
    int maxIndex = 0;
	for (int i = 0; i < n; i ++) {
		if ( arr[i] > maxVal ) {
			maxVal = arr[i];
			maxIndex = i;
}
}
	printf("Phan tu lon nhat dau tien la %d o vi tri %d", maxVal, maxIndex);

}
