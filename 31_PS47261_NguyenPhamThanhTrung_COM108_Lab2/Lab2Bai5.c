#include <stdio.h>

int main () {

  float a, b, x;
  printf("Nhap a: ");
  scanf("%f", &a);
  printf("Nhap b: ");
  scanf("%f", &b);
  if (a == 0) {
    if (b == 0) {
      printf("Phuong trinh vo so nghiem\n");
    } else {
      printf("Phuong trinh vo nghiem\n");
    }
  } else {
    x = -b / a;
    printf("Phuong trinh co nghiem x = %.2f\n", x);
  }
  return 0;
}
