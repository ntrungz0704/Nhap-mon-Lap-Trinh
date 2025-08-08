#include <stdio.h>
#include <string.h>

int main () {
  // Bài 2: xây dựng chương trình đăng nhập bằng username và password
  char username[50], password[50];
  char correctUsername[] = "admin";
  char correctPassword[] = "123456";
  printf("Nhap username: ");
  fgets(username, sizeof(username), stdin);
  printf("Nhap password: ");
  fgets(password, sizeof(password), stdin);

  // Xóa ký tự xuống dòng nếu có
  username[strcspn(username, "\n")] = 0;
  password[strcspn(password, "\n")] = 0;

  if (strcmp(username, correctUsername) == 0 && strcmp(password, correctPassword) == 0) {
    printf("Dang nhap thanh cong!\n");
  }
  else {
    printf("Dang nhap that bai! Vui long kiem tra lai username va password.\n");
  }
  return 0;
}
