#include <stdio.h>

int main () {
  //Bài 3: Xây dựng chương trình tính chu vi diện tích hình tròn
  float r, s, p;
  const float PI = 3.14;
  printf("Nhap vao ban kinh hinh tron: ");
  scanf("%f", &r);
  printf("Ban kinh hinh tron: %2.f\n", r);
  s = PI * r * r;
  p = 2 * PI * r;
  printf("Chu vi hinh tron: %2.f\n", p);
  printf("Dien tich hinh tron: %2.f\n", s);
  return 0;
}
