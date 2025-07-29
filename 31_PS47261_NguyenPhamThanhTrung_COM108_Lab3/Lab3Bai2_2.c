#include <stdio.h>
#include <math.h>
int main () {
  //Bài 2: Xây dựng chương trình giải phương trình Bậc 2
  float a, b, c, delta, x1, x2;
  printf("Nhap he so a: ");
  scanf("%f", &a);
  printf("Nhap he so b: ");
  scanf("%f", &b);
  printf("Nhap he so c: ");
  scanf("%f", &c);

  if (a == 0) {
    if (b == 0) {
      if (c == 0) {
        printf("Phuong trinh co vo so nghiem\n");
      }
      else {
        printf("Phuong trinh vo nghiem\n");
      }
    }
    else {
      x1 = -c / b;
      printf("Phuong trinh co nghiem x = %f\n", x1);
    }
  }
  else {
    delta = b*b - 4*a*c;
  }
  if (delta < 0) {
    printf("Phuong trinh vo nghiem\n");
  }
  else if (delta == 0) {
    x1 = -b / (2*a);
    printf("Phuong trinh co nghiem kep x: %f\n", x1);
  }
  else {
    x1 = (-b + sqrt(delta)) / (2*a);
    x2 = (-b - sqrt(delta))/(2*a);
    printf("Phuong trinh co 2 nghiem phan biet x1 = %.2f va x2 = %.2f\n", x1, x2);
  }
  return 0;
}
