#include <stdio.h>
#include <string.h>

struct sinhVien {
    char mssv[50];
    char tenSV[50];
    char nganhHoc[50];
    float diemTB;
};

int main() {
    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    getchar();

    struct sinhVien dssv[n];

    // Nhập thông tin sinh viên
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

    // Xuất danh sách học bổng theo ngành
    printf("\n===== DANH SACH SINH VIEN NHAN HOC BONG THEO NGANH (DiemTB >= 8) =====\n");

    int daXuat[100] = {0}; // mảng đánh dấu ngành đã in

    for (int i = 0; i < n; i++) {
        if (daXuat[i]) continue; // nếu ngành này đã in thì bỏ qua

        printf("\n--- Nganh: %s ---\n", dssv[i].nganhHoc);
        int coSV = 0;

        for (int j = 0; j < n; j++) {
            if (strcmp(dssv[j].nganhHoc, dssv[i].nganhHoc) == 0) {
                daXuat[j] = 1; // đánh dấu ngành này đã được xét
                if (dssv[j].diemTB >= 8) {
                    printf("Ma SV: %s | Ten: %s | DiemTB: %.2f\n",
                           dssv[j].mssv, dssv[j].tenSV, dssv[j].diemTB);
                    coSV = 1;
                }
            }
        }

        if (!coSV) {
            printf("Khong co sinh vien dat hoc bong\n");
        }
    }
    return 0;
}
