#include <stdio.h>
#include <stdbool.h>
#include<math.h>

bool SCP(int n);
int main()
{
    int x;
    int count = 0;
    int i;
    printf("Nhap x: ");
    scanf("%d", &x);
    if(SCP(x)){
        printf("%d la so chinh phuong",x);
    }
    else {
        printf("%d khong la so chinh phuong", x);
    }
    return 0;
}

bool SCP(int n){
    if (n < 0 || n == 0) {
        return false;
    }
    return sqrt(n) == (int)sqrt(n);
}
