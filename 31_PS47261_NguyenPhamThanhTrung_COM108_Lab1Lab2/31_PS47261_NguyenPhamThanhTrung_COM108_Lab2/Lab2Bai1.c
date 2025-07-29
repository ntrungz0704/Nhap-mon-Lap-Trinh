#include <stdio.h>
#include <string.h>

int main () {
  // Bài 1: Xây dựng chương trình +- 2 số
  int a, b;
  printf("Nhap so a: ");
  scanf("%d", &a);
  printf("Nhap so b: ");
  scanf("%d", &b);
  printf("%d + %d = %d\n", a, b, a + b);
  printf("%d - %d = %d\n", a, b, a - b);
  return 0;
}
