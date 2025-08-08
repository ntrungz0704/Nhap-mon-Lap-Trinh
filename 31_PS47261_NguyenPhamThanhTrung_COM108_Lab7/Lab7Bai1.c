#include <stdio.h>
#include <string.h>

int main () {
  // Bài 1: Xây dựng chương trình đếm nguyên âm và phụ âm
  char str[100];
  int nguyenAm = 0, phuAm = 0;
  printf("Nhap chuoi: ");
  fgets(str, sizeof(str), stdin);

  int n = strlen(str);
  for (int i = 0; i < n; i++) {
    char c = str[i];
    // Kiểm tra ký tự là chữ cái
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
      // Chuyển ký tự về chữ thường để kiểm tra nguyên âm
      c = (c >= 'A' && c <= 'Z') ? c + 32 : c;
      // Kiểm tra nguyên âm
      if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        nguyenAm++;
      } else {
        phuAm++;
      }
    }
  }
  printf("So luong nguyen am: %d\n", nguyenAm);
  printf("So luong phu am: %d\n", phuAm);
  return 0;
}
