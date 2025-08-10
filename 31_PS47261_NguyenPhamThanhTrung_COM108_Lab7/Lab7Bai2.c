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
