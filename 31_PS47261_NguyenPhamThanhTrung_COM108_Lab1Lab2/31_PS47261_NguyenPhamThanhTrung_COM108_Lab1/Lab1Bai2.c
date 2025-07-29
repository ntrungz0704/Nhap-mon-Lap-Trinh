#include <stdio.h>
#include <string.h>

int main() {
  char MSSV[10];
  char hoVaTen[50];
  int namSinh;
  float diemTB;


  // Nhập thông tin sinh viên
  printf("Nhap MSSV: ");
  fgets(MSSV, sizeof(MSSV), stdin);
  MSSV[strcspn(MSSV, "\n")] = '\0';

  printf("Nhap ho va ten: ");
  fgets(hoVaTen, sizeof(hoVaTen), stdin);
  hoVaTen[strcspn(hoVaTen, "\n")] = '\0';

  printf("Nhap nam sinh: ");
  scanf("%d", &namSinh);
  printf("Nhap diem trung binh: ");
  scanf("%f", &diemTB);

  printf("MSSV: %s\n", MSSV);
  printf("Ho va ten: %s\n", hoVaTen);
  printf("Nam sinh: %d\n", namSinh);
  printf("Tuoi: %d\n", 2025 - namSinh);
  printf("Diem trung binh: %.1f\n", diemTB);
  return 0;
}
