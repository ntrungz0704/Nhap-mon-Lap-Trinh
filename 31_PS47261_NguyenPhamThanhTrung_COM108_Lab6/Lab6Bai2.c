#include <stdio.h>

int main () {
  // Bài 2: Tìm giá trị lớn nhất và nhỏ nhất trong mảng
  int n;
  printf("Nhap so phan tu cua mang: ");
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    printf("Nhap a[%d]: ", i);
    scanf("%d", &arr[i]);
  }

  int max, min;
  for (int i = 0; i < n; i++) {
    if (i == 0) {
      max = arr[i];
      min = arr[i];
    } else {
      if (arr[i] > max) {
        max = arr[i];
      }
      if (arr[i] < min) {
        min = arr[i];
      }
    }
  }
  printf("Gia tri lon nhat trong mang la: %d\n", max);
  printf("Gia tri nho nhat trong mang la: %d\n", min);
  return 0;
}
