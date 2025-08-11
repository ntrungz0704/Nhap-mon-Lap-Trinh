#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>

// Khai báo hàm menu
void showMenu();
void showChoice();

// Khai báo chức năng
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

// Hàm kiểm tra
bool soNguyen(float num);
bool soChinhPhuong(int num);
bool soNguyenTo(int num);

// Hàm tính toán
int uocSoChung(int a, int b);
int boiSoChung(int a, int b);

// Main
int main() {
    showChoice();
    return 0;
}

// Menu
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
            case 1: cn1(); break;
            case 2: cn2(); break;
            case 3: cn3(); break;
            case 4: cn4(); break;
            case 5: cn5(); break;
            case 6: cn6(); break;
            case 7: cn7(); break;
            case 8: cn8(); break;
            case 9: cn9(); break;
            case 10: cn10(); break;
            case 0: printf(">> Thoat chuong trinh. Tam biet!\n"); break;
            default: printf(">> Lua chon khong hop le! Vui long nhap lai.\n");
        }
    } while (choice != 0);
}

// ================== CHỨC NĂNG ===================

void cn1() {
    printf(">> Dang xu ly chuc nang 1: Kiem tra so nguyen...\n");
    float num;
    printf("Nhap mot so: ");
    scanf("%f", &num);

    if (soNguyen(num)) {
        printf(">> %.2f la so nguyen.\n", num);
    } else {
        printf(">> %.2f khong phai la so nguyen.\n", num);
    }

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
}

void cn2() {
    printf(">> Dang xu ly chuc nang 2: Tim Uoc so chung va Boi so chung...\n");
    int a, b;
    printf("Nhap so thu nhat: "); scanf("%d", &a);
    printf("Nhap so thu hai: "); scanf("%d", &b);

    int gcd = uocSoChung(a, b);
    int lcm = boiSoChung(a, b);

    printf("Uoc so chung lon nhat: %d\n", gcd);
    printf("Boi so chung nho nhat: %d\n", lcm);
}

void cn3() {
  printf(">> Dang xu ly chuc nang 3: Tinh tien Karaoke...\n");
  int gioBatDau, gioKetThuc;
    printf("Nhap gio bat dau: ");
    scanf("%d", &gioBatDau);
    printf("Nhap gio ket thuc: ");
    scanf("%d", &gioKetThuc);

    // Kiểm tra giờ hợp lệ
    if (gioBatDau < 12 || gioKetThuc > 23 || gioBatDau >= gioKetThuc) {
        printf("Gio nhap khong hop le!\n");
        return;
    }

    int soGio = gioKetThuc - gioBatDau;
    float giaTien = 0;

    // Tính giá: 3 giờ đầu giá 150k/giờ
    if (soGio <= 3) {
        giaTien = soGio * 150000;
    } else {
        giaTien = 3 * 150000 + (soGio - 3) * (150000 * 0.7); // Giảm 30% từ giờ thứ 4
    }

    // Nếu bắt đầu từ 14h → 17h giảm thêm 10% tổng tiền
    if (gioBatDau >= 14 && gioBatDau <= 17) {
        giaTien *= 0.9;
    }

    printf("Tong tien can thanh toan: %.0f VND\n", giaTien);
  }
void cn4() {
  printf(">> Dang xu ly chuc nang 4: Tinh tien dien...\n");
  int kwh;
  printf("Nhap so kWh dien su dung: ");
  scanf("%d", &kwh);

  if (kwh < 0) {
    printf("So kWh khong hop le!\n");
    return;
  }

  double tien = 0;

  if (kwh <= 50) {
    tien = kwh * 1678;
  } else if (kwh <= 100) {
    tien = 50 * 1678 + (kwh - 50) * 1734;
  } else if (kwh <= 200) {
    tien = 50 * 1678 + 50 * 1734 + (kwh - 100) * 2014;
  } else if (kwh <= 300) {
    tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (kwh - 200) * 2536;
  } else if (kwh <= 400) {
    tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (kwh - 300) * 2834;
  } else {
    tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (kwh - 400) * 2927;
  }
   printf("Tong tien dien phai tra: %.0f VND\n", tien);
}

void cn5() {
  printf(">> Dang xu ly chuc nang 5: Doi tien...\n");
  int menhGia[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
  int soLuong[9] = {0};
  int soTien;

  printf("Nhap so tien can doi: ");
  scanf("%d", &soTien);

  for (int i = 0; i < 9; i++) {
    soLuong[i] = soTien / menhGia[i];
    soTien %= menhGia[i];
  }

  printf("\nKet qua doi tien:\n");
  for (int i = 0; i < 9; i++) {
    if (soLuong[i] > 0) {
      printf("%d to %d\n", soLuong[i], menhGia[i]);
    }
  }
}
void cn6() {
  printf(">> Dang xu ly chuc nang 6: Tinh lai suat vay ngan hang...\n");
  double tienVay;
  printf("Nhap so tien muon vay: ");
  scanf("%lf", &tienVay);

  double laiSuat = 0.05; // 5%/thang
  int kyHan = 12;

  double gocPhaiTra = tienVay / kyHan;
  double soTienConLai = tienVay;

  printf("\n%-5s %-15s %-15s %-20s %-20s\n", "Ky", "Lai phai tra", "Goc phai tra", "So tien phai tra", "So tien con lai");

  for (int ky = 1; ky <= kyHan; ky++) {
    double laiPhaiTra = soTienConLai * laiSuat;
    double soTienPhaiTra = laiPhaiTra + gocPhaiTra;
    soTienConLai -= gocPhaiTra;
    printf("%-5d %-15.0f %-15.0f %-20.0f %-20.0f\n", ky, laiPhaiTra, gocPhaiTra, soTienPhaiTra, soTienConLai);
    }
}
void cn7() {
  printf(">> Dang xu ly chuc nang 7: Vay tien mua xe...\n");
  double tienduocVay = 500000000; // 500 triệu
  int namVay = 24;
  double laiNam = 7.2; // %
  double phanTramVay;

  printf("Nhap vao so phan tram vay toi da: ");
  scanf("%lf", &phanTramVay);

  double soTienVay = tienduocVay * (phanTramVay / 100.0);
  double traTruoc = tienduocVay - soTienVay;

  int soThang = namVay * 12;
  double laiThang = (laiNam / 100.0) / 12.0;

  // Công thức EMI
  double EMI = (soTienVay * laiThang * pow(1 + laiThang, soThang)) / (pow(1 + laiThang, soThang) - 1);

  printf("\nSo tien tra truoc: %.0f VND", traTruoc);
  printf("\nSo tien phai tra hang thang: %.0f VND", EMI);
}
void cn8() { printf(">> Dang xu ly chuc nang 8: Sap xep thong tin sinh vien...\n"); }
void cn9() {
  printf(">> Dang xu ly chuc nang 9: Tro choi FPOLY-LOTT...\n");
  int user1, user2;
  int sys1, sys2;
  int match = 0;

  srand(time(NULL)); // Khởi tạo seed cho rand()

  // Nhập 2 số từ 01-15
  printf("Nhap so thu nhat (1-15): ");
  scanf("%d", &user1);
  printf("Nhap so thu hai (1-15): ");
  scanf("%d", &user2);

  // Sinh số ngẫu nhiên từ 1-15
  sys1 = rand() % 15 + 1;
  do {
  sys2 = rand() % 15 + 1;
  } while (sys2 == sys1); // Đảm bảo 2 số không trùng nhau

  printf("\nSo he thong: %02d %02d\n", sys1, sys2);

  // Kiểm tra trúng bao nhiêu số
  if (user1 == sys1 || user1 == sys2) match++;
  if (user2 == sys1 || user2 == sys2) match++;

  // Kết quả
  if (match == 2) {
    printf("Chuc mung ban da trung giai nhat!\n");
  } else if (match == 1) {
    printf("Chuc mung ban da trung giai nhi!\n");
  } else {
    printf("Chuc ban may man lan sau!\n");
  }
}
void cn10() { printf(">> Dang xu ly chuc nang 10: Tinh toan phan so...\n"); }

// ================== XỬ LÝ TÍNH TOÁN ===================

bool soNguyen(float num) {
    return num == (int)num;
}

bool soChinhPhuong(int num) {
    if (num < 0) return false;
    int root = (int)sqrt(num);
    return (root * root == num);
}

bool soNguyenTo(int num) {
    if (num < 2) return false;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int uocSoChung(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int boiSoChung(int a, int b) {
    return (a * b) / uocSoChung(a, b);
}
