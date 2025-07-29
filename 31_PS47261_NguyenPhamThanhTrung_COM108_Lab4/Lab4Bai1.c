#include <stdio.h>

int main () {
  int min, max;
  int tong = 0;
  int bienDem = 0;
  printf("Nhap min: ");
  scanf("%d", &min);
  printf("Nhap max: ");
  scanf("%d", &max);

  if (min > max) {
    int temp = min;
    min = max;
    max = temp;
  }

  int i = min;
  while (i <= max) {
    if (i % 2 == 0) {
      tong += i;
      bienDem++;
    }
    i++;
  }
  if (bienDem > 0) {
    float trungBinh = (float)tong / bienDem;
    printf("Trung binh cong cua cac so tu nhien chia het cho 2 trong khoang [%d, %d] la: %.2f\n", min, max, trungBinh);
  }
  else {
    printf("Khong co so nao chia het cho 2 trong khoang [%d, %d]\n", min, max);
  }
  return 0;
}
