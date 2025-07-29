#include <stdio.h>

void hoanVi();
int main () {
  // Bài 3: Hoán vị
  hoanVi();
  return 0;
}
void hoanVi() {
  int a, b, temp;
  printf("Nhap a: ");
  scanf("%d", &a);
  printf("Nhap b: ");
  scanf("%d", &b);
  // Trước khi hoán vị
  printf("Truoc khi hoan vi: a = %d, b = %d\n", a, b);

  // Sau khi hoán vị
  temp = a;
  a = b;
  b = temp;
  printf("Sau khi hoan vi: a = %d, b = %d\n", a, b);
}
