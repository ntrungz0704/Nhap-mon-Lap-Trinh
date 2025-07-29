#include<stdio.h>

int main () {
  //Bài 3: Xây dựng chương trình tính tiền điện
  float soDien, tienDien;
  printf("Nhap so dien: ");
  scanf("%f", &soDien);
  if (soDien <= 50 ) {
    tienDien = soDien * 1.678;
    printf("Tien dien: %.2f VND\n", tienDien);
  }
  else if (soDien <= 100) {
    tienDien = soDien * 1.734;
    printf("Tien dien: %.2f VND\n", tienDien);
  }
  else if (soDien <= 200) {
    tienDien = soDien * 2.014;
    printf("Tien dien: %.2f VND\n", tienDien);
  }
  else if (soDien <= 300) {
    tienDien = soDien * 2.536;
    printf("Tien dien: %.2f VND\n", tienDien);
  }
  else if (soDien <= 400) {
    tienDien = soDien * 2.834;
    printf("Tien dien: %.2f VND\n", tienDien);
  }
  else{
    tienDien = soDien * 2.927;
    printf("Tien dien: %.2f VND\n", tienDien);
  }
  return 0;
}
