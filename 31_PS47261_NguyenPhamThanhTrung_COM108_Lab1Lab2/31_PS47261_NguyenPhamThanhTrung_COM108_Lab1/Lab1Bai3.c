#include <stdio.h>
#include <string.h>

int main () {
  // Nhập thông tin sinh viên
  char mssv[10];
  char hoTen[50];
  float diemToan;
  float diemLy;
  float diemHoa;
  float diemTB;
  printf("Nhap mssv: ");
  fgets(mssv, sizeof(mssv), stdin);
  mssv[strcspn(mssv, "\n")] = '\0'; // Loại bỏ ký tự newline
  printf("Nhap ho va ten: ");
  fgets(hoTen, sizeof(hoTen), stdin);
  hoTen[strcspn(hoTen, "\n")] = '\0'; // Loại bỏ ký tự newline
  printf("Nhap diem toan: ");
  scanf("%f", &diemToan);
  printf("Nhap diem ly: ");
  scanf("%f", &diemLy);
  printf("Nhap diem hoa: ");
  scanf("%f", &diemHoa);
  diemTB = ((diemToan * 2) + diemLy + diemHoa) / 3.0;
  printf("MSSV: %s\n", mssv);
  printf("Ho va ten: %s\n", hoTen);
  printf("Diem trung binh: %.1f\n", diemTB);
  return 0;
}
