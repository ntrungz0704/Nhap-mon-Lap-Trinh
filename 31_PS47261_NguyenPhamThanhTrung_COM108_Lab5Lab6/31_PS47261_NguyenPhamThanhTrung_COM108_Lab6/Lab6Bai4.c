<<<<<<< HEAD
#include <stdio.h>

int main () {
  // Bài 4: Tính bình phương các phần tử trong mảng 2 chiều
  int m, n;
  printf("Nhap so hang cua ma tran: ");
  scanf("%d", &m);
  printf("Nhap so cot cua ma tran: ");
  scanf("%d", &n);
  int arr[m][n];
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      printf("Nhap arr[%d][%d]: ", i, j);
      scanf("%d", &arr[i][j]);
    }
  }

  // Tính bình phương các phần tử
  printf("Ma tran sau khi tinh binh phuong cac phan tu:\n");
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      arr[i][j] *= arr[i][j]; // Bình phương phần tử
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
  return 0;
}
=======
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
>>>>>>> 4ef3c68374ff6e4b30c4235f7b00ee13e407f7ee
