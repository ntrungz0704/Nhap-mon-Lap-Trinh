#include <stdio.h>

int main () {
  //Bài 1: Xây dựng chương trình tính học lực
  float diemHocLuc;
  printf("Nhap diem hoc luc: ");
  scanf("%f", &diemHocLuc);
  if (diemHocLuc >= 9 ) {
    printf("Hoc luc xuat sac");
    }
    else if (diemHocLuc >= 8) {
      printf("Hoc luc gioi");
    }
    else if (diemHocLuc >= 6.5) {
      printf("Hoc luc kha");
    }
    else if (diemHocLuc >= 5) {
      printf("Hoc luc trung binh");
    }
    else if (diemHocLuc >= 3.5) {
      printf("Hoc luc yeu");
    }
    else {
      printf("Hoc luc kem");
    }
  return 0;
}
