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
