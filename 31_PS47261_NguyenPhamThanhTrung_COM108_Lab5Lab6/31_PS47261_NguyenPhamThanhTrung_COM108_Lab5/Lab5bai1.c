#include <stdio.h>

void timMax();
int main () {
  // Bài 1 xây dựng chương trình tìm giá trị lớn nhất trong 3 số
  timMax();
  return 0;
}

void timMax() {
  int a, b, c;
  int max;
  printf("Nhap a: ");
  scanf("%d", &a);
  printf("Nhap b: ");
  scanf("%d", &b);
  printf("Nhap c: ");
  scanf("%d", &c);
  if (a >= b && a >= c) {
    max = a;
  }
  else if (b >= a && b >= c) {
    max = b;
  }
  else {
    max = c;
  }
  printf("Gia tri lon nhat la: %d", max);
}
