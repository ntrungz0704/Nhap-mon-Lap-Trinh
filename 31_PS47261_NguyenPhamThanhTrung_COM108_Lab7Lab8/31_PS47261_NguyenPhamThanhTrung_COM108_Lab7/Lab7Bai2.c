<<<<<<< HEAD
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
=======
#include <stdio.h>
#include <string.h>

int main () {
  char userSys[] = "admin";
  char passSys[] = "123456";
  char user[20];
  char pass[20];
  printf("Nhap ten dang nhap: ");
  fgets(user, sizeof(user), stdin);
  printf("Nhap mat khau dang nhap: ");
  fgets(pass, sizeof(pass), stdin);
  // Xoa ki tu xuong dong
  user[strcspn(user, "\n")] = 0;
  pass[strcspn(pass, "\n")] = 0;
  if (strcmp(user, userSys) == 0 && strcmp(pass, passSys) == 0) {
    printf("Dang nhap thanh cong!\n");
  } else {
    printf("Dang nhap that bai!\n");
  }
  return 0;
}
>>>>>>> 4ef3c68374ff6e4b30c4235f7b00ee13e407f7ee
