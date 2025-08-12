#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
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

typedef struct {
    char ten[50];
    float diem;
} SinhVien;

typedef struct {
    int tu, mau;
} PhanSo;

PhanSo rutGon(PhanSo ps) {
    int a = ps.tu, b = ps.mau;
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    ps.tu /= a;
    ps.mau /= a;
    return ps;
}
// Hàm kiểm tra
bool soNguyen(float num);
bool soChinhPhuong(int num);
bool soNguyenTo(int num);

// Hàm tính toán
int uscln(int a, int b);
int bscnn(int a, int b);

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
    int x, y;
    printf("Nhap so thu nhat: ");
    scanf("%d", &x);
    printf("Nhap so thu hai: ");
    scanf("%d", &y);

    printf("Uoc so chung lon nhat (USCLN) cua %d va %d la: %d\n", x, y, uscln(x, y));
    printf("Boi so chung nho nhat (BSCNN) cua %d va %d la: %d\n", x, y, bscnn(x, y));
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
  float phanTramTraTruoc;
  printf("Nhap vao so phan tram vay to da (vi du: 80 = tra truoc 20%%): ");
  scanf("%f", &phanTramTraTruoc);

  float tongVay = 500000000; // 500 triệu
  int thoiGianVay = 24;      // 24 tháng
  float laiSuat = 0.072;     // 7.2%/năm

  // Số tiền vay thực tế
  float soTienVay = tongVay * phanTramTraTruoc / 100;
  float gocPhaiTra = soTienVay / thoiGianVay;
  float soTienConLai = soTienVay;
  printf("%-5s %-15s %-15s %-20s\n", "Thang", "Goc phai tra", "Lai phai tra", "So tien con lai");

  for (int i = 1; i <= thoiGianVay; i++) {
      float laiPhaiTra = soTienConLai * (laiSuat / 12);
      soTienConLai -= gocPhaiTra;
      printf("%-5d %-15.0f %-15.0f %-20.0f\n", i, gocPhaiTra, laiPhaiTra, soTienConLai);
    }
}
void cn8() {
  printf(">> Dang xu ly chuc nang 8: Sap xep thong tin sinh vien...\n");
int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);

    SinhVien sv[n];

    for (int i = 0; i < n; i++) {
        printf("Nhap ten sinh vien %d: ", i + 1);
        scanf(" %[^\n]", sv[i].ten);
        printf("Nhap diem: ");
        scanf("%f", &sv[i].diem);
    }

    // Sắp xếp giảm dần theo điểm
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (sv[i].diem < sv[j].diem) {
                SinhVien temp = sv[i];
                sv[i] = sv[j];
                sv[j] = temp;
            }
        }
    }

    printf("\n%-20s %-10s %-15s\n", "Ten", "Diem", "Hoc luc");
    for (int i = 0; i < n; i++) {
        char hocLuc[20];
        if (sv[i].diem >= 8) strcpy(hocLuc, "Xuat sac");
        else if (sv[i].diem >= 6.5) strcpy(hocLuc, "Gioi");
        else if (sv[i].diem >= 5) strcpy(hocLuc, "Trung binh");
        else strcpy(hocLuc, "Yeu");
        printf("%-20s %-10.1f %-15s\n", sv[i].ten, sv[i].diem, hocLuc);
    }
}
void cn9() {
  int so1, so2;
    printf("Nhap 2 so tu ban phim (1-15): ");
    scanf("%d %d", &so1, &so2);

    srand(time(NULL));
    int g1 = rand() % 15 + 1;
    int g2 = rand() % 15 + 1;

    printf("So trung giai: %d - %d\n", g1, g2);

    if ((so1 == g1 && so2 == g2) || (so1 == g2 && so2 == g1))
        printf("Chuc mung ban da trung giai nhat!\n");
    else if (so1 == g1 || so1 == g2 || so2 == g1 || so2 == g2)
        printf("Chuc mung ban da trung giai nhi!\n");
    else
        printf("Chuc ban may man lan sau!\n");
}
void cn10() {
  printf(">> Dang xu ly chuc nang 10: Tinh toan phan so...\n");
PhanSo ps1, ps2, kq;

    printf("Nhap phan so thu nhat (tu mau): ");
    scanf("%d %d", &ps1.tu, &ps1.mau);
    printf("Nhap phan so thu hai (tu mau): ");
    scanf("%d %d", &ps2.tu, &ps2.mau);

    // Tổng
    kq.tu = ps1.tu * ps2.mau + ps2.tu * ps1.mau;
    kq.mau = ps1.mau * ps2.mau;
    kq = rutGon(kq);
    printf("Tong: %d/%d\n", kq.tu, kq.mau);

    // Hiệu
    kq.tu = ps1.tu * ps2.mau - ps2.tu * ps1.mau;
    kq.mau = ps1.mau * ps2.mau;
    kq = rutGon(kq);
    printf("Hieu: %d/%d\n", kq.tu, kq.mau);

    // Tích
    kq.tu = ps1.tu * ps2.tu;
    kq.mau = ps1.mau * ps2.mau;
    kq = rutGon(kq);
    printf("Tich: %d/%d\n", kq.tu, kq.mau);

    // Thương
    kq.tu = ps1.tu * ps2.mau;
    kq.mau = ps1.mau * ps2.tu;
    kq = rutGon(kq);
    printf("Thuong: %d/%d\n", kq.tu, kq.mau);
}

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

int uscln(int a, int b) {
    a = abs(a);
    b = abs(b);
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int bscnn(int a, int b) {
    return abs(a * b) / uscln(a, b);
}

