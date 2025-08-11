<<<<<<< HEAD
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
=======
#include <stdio.h>
#include <string.h>
#include <ctype.h> // để dùng isalpha() và tolower()

int main() {
    char chuoi[250] = "";
    char nguyenAm[6] = "aeiou";
    char kyTu[2];
    kyTu[1] = '\0'; // Đặt ký tự kết thúc chuỗi cho kyTu
    int i = 0;
    int n = 0;
    int p = 0;
    printf("Nhap chuoi: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    while (chuoi[i] != '\0') {
        if (isalpha(chuoi[i])) {
            kyTu[0] = tolower(chuoi[i]);
            if (strstr(nguyenAm, kyTu) != NULL) {
                n++;
            } else {
                p++;
            }
        }
        i++;
    }

    printf("Nguyen am: %d \nPhu am: %d\n", n, p);
    return 0;
}
>>>>>>> 4ef3c68374ff6e4b30c4235f7b00ee13e407f7ee
