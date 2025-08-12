#include <stdio.h>

int main () {
  // Bài 5: Giảng Giảng viên cho thêm bài tập
  int n,m;
  printf("Nhap so hang cua ma tran: ");
  scanf("%d", &n);
  printf("Nhap so cot cua ma tran: ");
  scanf("%d", &m);
  int arr[n][m];
  // Nhập mảng 2 chiều
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf("Nhap arr[%d][%d]: ", i, j);
      scanf("%d", &arr[i][j]);
    }
  }

  // Xuất ra màn hình các phần tử lẻ trong mảng 2 chiều
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (arr[i][j] % 2 != 0) {
        printf("%d ", arr[i][j], "\t"); // In ra các phần tử lẻ
      }
    } printf("\n");
  }
  return 0;
}
