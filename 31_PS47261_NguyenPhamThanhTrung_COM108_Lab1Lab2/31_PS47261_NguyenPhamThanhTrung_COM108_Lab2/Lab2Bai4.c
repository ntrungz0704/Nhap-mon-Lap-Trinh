#include <stdio.h>

int main () {
  //Bài 4: Xây dựng chương trình tính điểm trung bình
  float diemToan, diemLy, diemHoa, diemTB;
  printf("Nhap diem toan: ");
  scanf("%f", &diemToan);
  printf("Nhap diem ly: ");
  scanf("%f", &diemLy);
  printf("Nhap diem hoa: ");
  scanf("%f", &diemHoa);
  diemTB = (diemToan *3  + diemLy * 2 + diemHoa) / 3;
  printf("Diem trung binh: %.2f\n", diemTB);

}
