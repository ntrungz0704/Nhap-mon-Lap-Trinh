#include <stdio.h>

void timNamNhuan();
int main () {
  // Bài 2 Xây dựng chương trình tìm năm nhuận
  timNamNhuan();
  return 0;
}

void timNamNhuan() {
  int nam;
  printf("Nhap nam: ");
  scanf("%d", &nam);
  if ( nam % 400 == 0 || nam % 4 == 0 && nam % 100 != 0 ) {
    printf("%d la nam nhuan", nam);
  }
  else {
    printf("%d khong phai la nam nhuan", nam);
  }
}
