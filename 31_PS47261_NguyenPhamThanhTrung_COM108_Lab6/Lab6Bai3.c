#include <stdio.h>

int main () {
  // Bài 3: sắp xếp mảng theo thứ tự giảm dần
  int n;
  printf("Nhap so phan tu cua mang: ");
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    printf("Nhap a[%d]: ", i);
    scanf("%d", &arr[i]);
  }

  // sắp xếp mảng
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[i] < arr[j]) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
  printf("Mang sau khi sap xep theo thu tu giam dan la:\n");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  return 0;
}
