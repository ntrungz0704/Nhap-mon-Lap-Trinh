#include <stdio.h>

int main() {
    int gioBatDau, gioKetThuc;
    int soGio;
    float thanhTien = 0;

    printf("Nhap gio bat dau (12-23): ");
    scanf("%d", &gioBatDau);
    printf("Nhap gio ket thuc (12-23): ");
    scanf("%d", &gioKetThuc);

    soGio = gioKetThuc - gioBatDau;

    if (gioBatDau < 12 || gioKetThuc > 23 || gioBatDau >= gioKetThuc) {
        printf("Khong hop le!\n");
        return 0;
    }

    if (soGio <= 3) {
        thanhTien = soGio * 150000;
    } else {
        thanhTien = 3 * 150000 + (soGio - 3) * 150000 * 0.7;
    }

    if (gioBatDau >= 14 && gioBatDau <= 17) {
        thanhTien *= 0.9;
    }

    printf("Tong tien: %.0f VND\n", thanhTien);
    return 0;
}
