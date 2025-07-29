#include <stdio.h>

// Khai báo hàm
void showMenu();
void showChoice();

// Hàm các chức năng
void soNguyen();
void uocSoChungVaBoiSoChung();
// usc la so nguyen lon nhat chia het cho ca 2 so nguyen a va b
// đk cả 2 đều là số nguyên duong và luôn lớn hơn 1 với a và b != 0


int main() {
    showChoice();
    return 0;
}

// Chức năng của hàm
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

void showChoice() {
    int choice;
    do {
        showMenu();
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf(">> Dang xu ly chuc nang 1: Kiem tra so nguyen...\n");
                soNguyen();
                break;
            case 2:
                printf(">> Dang xu ly chuc nang 2: Tim Uoc so chung va Boi so chung...\n");
                break;
            case 3:
                printf(">> Dang xu ly chuc nang 3: Tinh tien Karaoke...\n");
                break;
            case 4:
                printf(">> Dang xu ly chuc nang 4: Tinh tien dien...\n");
                break;
            case 5:
                printf(">> Dang xu ly chuc nang 5: Doi tien...\n");
                break;
            case 6:
                printf(">> Dang xu ly chuc nang 6: Tinh lai suat vay ngan hang...\n");
                break;
            case 7:
                printf(">> Dang xu ly chuc nang 7: Vay tien mua xe...\n");
                break;
            case 8:
                printf(">> Dang xu ly chuc nang 8: Sap xep thong tin sinh vien...\n");
                break;
            case 9:
                printf(">> Dang xu ly chuc nang 9: Tro choi FPOLY-LOTT...\n");
                break;
            case 10:
                printf(">> Dang xu ly chuc nang 10: Tinh toan phan so...\n");
                break;
            case 0:
                printf(">> Thoat chuong trinh. Tam biet!\n");
                break;
            default:
                printf(">> Lua chon khong hop le! Vui long nhap lai.\n");
        }
    } while (choice != 0);
}


// Hàm xử lý tính toán các chức năng của chương trình
void soNguyen() {
    int num;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &num);
    if ( num == (int)num ) {
        printf("Day la so nguyen.\n");
    }
    else {
        printf("Day khong phai la so nguyen.\n");
    }
}
