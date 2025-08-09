#include <stdio.h>

int main () {
  // Bài 4: Tính bình phương của các phần tử trong mảng
  int n, m;
  printf("Nhap so hang trong mang: ");
  scanf("%d", &n);
  printf("Nhap so cot trong mang: ");
  scanf("%d", &m);
  int arr[n][m];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf("Nhap a[%d][%d]: ", i, j);
      scanf("%d", &arr[i][j]);
    }
  }
  // Tính bình phương của các phần tử
  printf("Mang sau khi tinh binh phuong la:\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      arr[i][j] *= arr[i][j]; // Tính bình phương
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
  return 0;
}
