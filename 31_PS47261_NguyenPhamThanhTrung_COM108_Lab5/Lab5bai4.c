#include <stdio.h>

int main () {
// Bài 4: Viết hàm ktra bộ 3 số có phải là 3 cạnh của một tam giác hay ko
  int a, b, c;
  printf("Nhap a: ");
  scanf("%d", &a);
  printf("Nhap b: ");
  scanf("%d", &b);
  printf("Nhap c: ");
  scanf("%d", &c);
  if (!(a + b > c && a + c > b && b + c > a )) {
    printf("Ba canh tren ko the tao thanh tam giac");
    return 0;
  }


  if (a == b && b == c) {
    printf("Ba canh tren tao thanh tam giac deu");
  }
  else if (a == b || b == c || a == c) {
    printf("Ba canh tren tao thanh tam giac can");
  }
  else if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) {
    printf("Ba canh tren tao thanh tam giac vuong");
  }
  else if ((a == b && a*a + b*b == c*c) || (a == c && a*a + c*c == b*b) || (b == c && b*b + c*c == a*a)) {
    printf("Ba canh tren tao thanh tam giac vuong can");
  }
  else {
    printf("Ba canh tren tao thanh tam giac thuong");
  }
  return 0;
}
