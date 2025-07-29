#include <stdio.h>

int main () {
  // Bài 1 Tính trung bình tổng các số chia hết cho 3 và 5 trong mảng
  int n;
  printf("Nhap so phan tu cua mang: ");
  scanf("%d", &n);
  int a[n];
  int sum = 0;
  int count = 0;
  for (int i = 0; i < n; i++) {
    printf("Nhap a[%d]: ", i);
    scanf("%d", &a[i]);
    if (a[i] % 3 == 0 && a[i] % 5 == 0) {
      sum += a[i];
      count++;
    }
  }
  if (count > 0) {
    printf("Trung binh tong cac so chia het cho 3 va 5: %.2f\n", (float)sum / count);
  } else {
    printf("Khong co so nao chia het cho 3 va 5.\n");
  }
  return 0;
}
