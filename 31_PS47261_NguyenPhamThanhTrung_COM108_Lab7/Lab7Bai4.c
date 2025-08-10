#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char bin[100];
    int i = 0;

    printf("Nhap so thap phan (so nguyen khong am): ");
    // Kiểm tra đầu vào, nếu không phải số hoặc là số âm thì báo lỗi
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Dau vao khong hop le!\n");
        return 1; // Thoát với mã lỗi
    }

    if (n == 0) {
        bin[i++] = '0';
    } else {
        while (n > 0) {
            bin[i++] = (n % 2) + '0'; // Dùng '0' thay vì 48 để dễ đọc hơn
            n /= 2;
        }
    }
    bin[i] = '\0';

    // Đảo chuỗi thủ công để tương thích với mọi trình biên dịch
    // vì strrev() không phải là hàm chuẩn của C
    int start = 0;
    int end = i - 1;
    char temp;
    while (start < end) {
        temp = bin[start];
        bin[start] = bin[end];
        bin[end] = temp;
        start++;
        end--;
    }

    printf("So nhi phan: %s\n", bin);
    return 0;
}
