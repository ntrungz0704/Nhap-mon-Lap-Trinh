#include <stdio.h>
#include <string.h>

int main () {
  // Bài 2: Xây dựng chương trình tính chu vi diện tích hcn
  float cd, cr, s, p;
  printf("Nhap chieu dai: ");
  scanf("%f", &cd);
  printf("Nhap chieu rong: ");
  scanf("%f", &cr);
  s = cd * cr;
  p = 2 * (cd + cr);
  printf("Chu vi hcn: %.2f\n", p);
  printf("Dien tich hcn: %.2f\n", s);
  return 0;
}
