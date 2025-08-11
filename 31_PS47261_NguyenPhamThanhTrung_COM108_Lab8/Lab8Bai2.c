#include <stdio.h>
#include <string.h>
// mssv, tên, ngành, điểm

struct sinhVien {
  char mssv[50];
  char tenSV[50];
  char nganhHoc[50];
  float diemTB;
};

int main () {
  int n; // nhap so luong sv mong muon
  printf("nhap so luong sinh vien: ");
  scanf("%d", &n);
  getchar();

  struct sinhVien dssv[n];

  for (int i = 0; i < n; i++) {
    printf("\n--- Nhap thong tin sinh vien thu %d ---\n", i + 1);
    printf("Ma SV: ");
    fgets(dssv[i].mssv, sizeof(dssv[i].mssv), stdin);
    dssv[i].mssv[strcspn(dssv[i].mssv, "\n")] = 0; // xóa ký tự xuống dòng
    printf("Ten SV: ");
    fgets(dssv[i].tenSV, sizeof(dssv[i].tenSV), stdin);
    dssv[i].tenSV[strcspn(dssv[i].tenSV, "\n")] = 0;

    printf("Nganh hoc: ");
    fgets(dssv[i].nganhHoc, sizeof(dssv[i].nganhHoc), stdin);
    dssv[i].nganhHoc[strcspn(dssv[i].nganhHoc, "\n")] = 0;

    printf("Diem trung binh: ");
    scanf("%f", &dssv[i].diemTB);
    getchar(); // xóa bộ nhớ đệm
  }

  for (int i = 0; i < n ; i++) {
    for (int j = 0 ; j < n; j++) {
      if (dssv[i].diemTB < dssv[j].diemTB) {
        struct sinhVien temp = dssv[i];
        dssv[i] = dssv[j];
        dssv[j] = temp;
      }
    }
  }

  printf("\n===== DANH SACH SINH VIEN =====\n");

  for (int i = 0; i < n; i++) {
    printf("\nSinh vien %d:\n", i + 1);
    printf("Ma SV: %s\n", dssv[i].mssv);
    printf("Ten SV: %s\n", dssv[i].tenSV);
    printf("Nganh hoc: %s\n", dssv[i].nganhHoc);
    printf("Diem TB: %.2f\n", dssv[i].diemTB);
  }
  return 0;
}
