#include <stdio.h>

int main () {
  // Bài 4: Viết hàm kiểm tra bộ 3 số có phải là 3 cạnh của một tam giác hay không. Nếu phải thì đó làm loại tam giác gì?
  int a, b, c;
  printf("Nhap canh a: ");
  scanf("%d", &a);
  printf("Nhap canh b: ");
  scanf("%d", &b);
  printf("Nhap canh c: ");
  scanf("%d", &c);
  if (a + b > c && a + c > b && b + c > a) {
    printf("3 canh %d, %d, %d la 3 canh cua mot tam giac", a, b, c);
  }
  else {
    printf("3 canh %d, %d, %d khong phai la 3 canh cua mot tam giac", a, b, c);
  }
  // Kiểm tra loại tam giác
  if (a == b && b == c) {
    printf(" va do la tam giac deu.\n");
  } else if (a == b || b == c || a == c) {
    printf(" va do la tam giac can.\n");
  } else {
    printf(" va do la tam giac thuong.\n");
  }
  return 0;
}
