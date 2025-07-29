#include <stdio.h>

// Khai báo hàm nhận tham số và trả về kết quả
int gcd(int a, int b);

int main () {
    int a, b;
    printf("Nhap hai so nguyen a va b: ");
    scanf("%d %d", &a, &b);
    if (a == 0 && b == 0) {
        printf("USCLN(0,0) khong xac dinh\n");
    } else {
        printf("USCLN(%d, %d) = %d\n", a, b, gcd(a, b));
    }
    return 0;
}

// Hàm tính USCLN (gcd)
int gcd(int a, int b) {
    if (a == 0) return b;
    if (b == 0) return a;
    while (a != b) {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
}
