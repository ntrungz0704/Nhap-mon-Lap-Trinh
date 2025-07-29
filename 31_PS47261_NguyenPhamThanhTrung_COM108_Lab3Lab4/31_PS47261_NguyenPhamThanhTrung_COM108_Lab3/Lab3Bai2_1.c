#include <stdio.h>
#include <math.h>

int main () {
  //Bài 2: Xây dựng chương trình giải phương trình Bậc 1
  float a,b,x;
  printf("Nhap he so a: ");
  scanf("%f", &a);
  printf("Nhap he so b: ");
  scanf("%f", &b);
  if (a == 0) {
    if (b == 0) {
      printf("Phuong trinh co vo so nghiem\n");
    } else {
      printf("Phuong trinh vo nghiem\n");
    }
  } else {
    x = -b / a;
    printf("Phuong trinh co nghiem x = %.2f\n", x);
  }
  return 0;
}
