#include <stdio.h>
#include <stdbool.h>
<<<<<<< HEAD
=======
#include <math.h>
>>>>>>> 2615dacd16197d90edcf8d0fd758e7f552ed28b0

// Khai báo hàm
void showMenu();
void showChoice();

// Khai báo hàm các chức năng
void cn1();
void cn2();
void cn3();
void cn4();
void cn5();
void cn6();
void cn7();
void cn8();
void cn9();
void cn10();

// Khai báo hàm xử lý các chức năng
<<<<<<< HEAD
bool soNguyen(float num);
=======
// Hàm cn 1
bool soNguyen(float num);
bool soChinhPhuong(int num);
bool soNguyenTo(int num);

// Hàm cn 2
void uocSoChung(int a, int b);
void boiSoChung(int a, int b);
>>>>>>> 2615dacd16197d90edcf8d0fd758e7f552ed28b0

// Hàm Chính Bắt Đầu Chạy Chương Trình
int main() {
    showChoice();
    return 0;
}

// Chức năng của hàm Menu
void showMenu() {
    printf("\n============== MENU CHUONG TRINH ==============\n");
    printf("| 1. Kiem tra so nguyen                         |\n");
    printf("| 2. Tim Uoc so chung va Boi so chung cua 2 so  |\n");
    printf("| 3. Tinh tien Karaoke                          |\n");
    printf("| 4. Tinh tien dien                             |\n");
    printf("| 5. Doi tien                                   |\n");
    printf("| 6. Tinh lai suat vay ngan hang                |\n");
    printf("| 7. Vay tien mua xe                            |\n");
    printf("| 8. Sap xep thong tin sinh vien                |\n");
    printf("| 9. Tro choi FPOLY-LOTT (2/15)                 |\n");
    printf("| 10. Tinh toan phan so                         |\n");
    printf("| 0. Thoat chuong trinh                         |\n");
    printf("================================================\n");
    printf("Moi ban chon chuc nang (0 - 10): ");
}

// Hàm xử lý lựa chọn
void showChoice() {
    int choice;
    do {
        showMenu();
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                cn1();
                break;
            case 2:
                cn2();
                break;
            case 3:
                cn3();
                break;
            case 4:
                cn4();
                break;
            case 5:
                cn5();
                break;
            case 6:
                cn6();
                break;
            case 7:
                cn7();
                break;
            case 8:
                cn8();
                break;
            case 9:
                cn9();
                break;
            case 10:
                cn10();
                break;
            case 0:
                printf(">> Thoat chuong trinh. Tam biet!\n");
                break;
            default:
                printf(">> Lua chon khong hop le! Vui long nhap lai.\n");
        }
    } while (choice != 0);
}

void cn1() {
    printf(">> Dang xu ly chuc nang 1: Kiem tra so nguyen...\n");
    float num;
<<<<<<< HEAD
=======
    printf("Nhap mot so: ");
>>>>>>> 2615dacd16197d90edcf8d0fd758e7f552ed28b0
    scanf("%f", &num);
    if (soNguyen(num)) {
        printf(">> %.2f la so nguyen.\n", num);
    } else {
        printf(">> %.2f khong phai la so nguyen.\n", num);
    }
<<<<<<< HEAD

=======
    if (soChinhPhuong((int)num)) {
        printf(">> %d la so chinh phuong.\n", (int)num);
    } else {
        printf(">> %d khong phai la so chinh phuong.\n", (int)num);
    }
    if (soNguyenTo((int)num)) {
        printf(">> %d la so nguyen to.\n", (int)num);
    } else {
        printf(">> %d khong phai la so nguyen to.\n", (int)num);
    }
>>>>>>> 2615dacd16197d90edcf8d0fd758e7f552ed28b0
}

void cn2() {
    printf(">> Dang xu ly chuc nang 2: Tim Uoc so chung va Boi so chung...\n");
}

void cn3() {
    printf(">> Dang xu ly chuc nang 3: Tinh tien Karaoke...\n");
}

void cn4() {
    printf(">> Dang xu ly chuc nang 4: Tinh tien dien...\n");
}

void cn5() {
    printf(">> Dang xu ly chuc nang 5: Doi tien...\n");
}

void cn6() {
    printf(">> Dang xu ly chuc nang 6: Tinh lai suat vay ngan hang...\n");
}

void cn7() {
    printf(">> Dang xu ly chuc nang 7: Vay tien mua xe...\n");
}

void cn8() {
    printf(">> Dang xu ly chuc nang 8: Sap xep thong tin sinh vien...\n");
}

void cn9() {
    printf(">> Dang xu ly chuc nang 9: Tro choi FPOLY-LOTT...\n");
}

void cn10() {
    printf(">> Dang xu ly chuc nang 10: Tinh toan phan so...\n");
}


// Hàm xử lý tính toán các chức năng của chương trình
<<<<<<< HEAD
bool soNguyen(float num) {
    if ( num == (int)num ) {
        return true;
    }
    else {
=======

// SN
bool soNguyen(float num) {
    if (num == (int)num) {
        return true;
    } else {
>>>>>>> 2615dacd16197d90edcf8d0fd758e7f552ed28b0
        return false;
    }
}
// SCP
bool soChinhPhuong(int num) {
    if (num < 0) {
        return false;
    }
    else {
        int root = (int)sqrt(num);
        return (root * root == num);
    }
}
// SNT
bool soNguyenTo(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

//
void uocSoChung(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void boiSoChung(int a, int b) {
    return (a * b) / uocSoChung(a, b);
}
