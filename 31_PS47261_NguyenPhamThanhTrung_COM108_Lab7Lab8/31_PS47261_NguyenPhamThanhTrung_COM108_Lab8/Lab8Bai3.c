#include <stdio.h>

struct sinhVien {
  char mssv[50];
  char tenSV[50];
  char nganhHoc[50];
  float diemTB;
};
int main () {
  int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    getchar();

    struct sinhVien dssv[n];

    // Nhập thông tin
    for (int i = 0; i < n; i++) {
        printf("\n--- Nhap thong tin sinh vien thu %d ---\n", i + 1);

        printf("Ma SV: ");
        fgets(dssv[i].mssv, sizeof(dssv[i].mssv), stdin);
        dssv[i].mssv[strcspn(dssv[i].mssv, "\n")] = 0;

        printf("Ten SV: ");
        fgets(dssv[i].tenSV, sizeof(dssv[i].tenSV), stdin);
        dssv[i].tenSV[strcspn(dssv[i].tenSV, "\n")] = 0;

        printf("Nganh hoc: ");
        fgets(dssv[i].nganhHoc, sizeof(dssv[i].nganhHoc), stdin);
        dssv[i].nganhHoc[strcspn(dssv[i].nganhHoc, "\n")] = 0;

        printf("Diem trung binh: ");
        scanf("%f", &dssv[i].diemTB);
        getchar();
    }

    // Nhập mã sinh viên cần tìm
    char mssvTim[50];
    printf("\nNhap ma SV can tim: ");
    fgets(mssvTim, sizeof(mssvTim), stdin);
    mssvTim[strcspn(mssvTim, "\n")] = 0;

    // Tìm kiếm
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(dssv[i].mssv, mssvTim) == 0) {
            printf("\n=== THONG TIN SINH VIEN TIM THAY ===\n");
            printf("Ma SV: %s\n", dssv[i].mssv);
            printf("Ten SV: %s\n", dssv[i].tenSV);
            printf("Nganh hoc: %s\n", dssv[i].nganhHoc);
            printf("Diem TB: %.2f\n", dssv[i].diemTB);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\nKhong tim thay sinh vien co ma: %s\n", mssvTim);
    }
  return 0;
}
