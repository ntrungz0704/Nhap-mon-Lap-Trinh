#include <stdio.h>
#include <stdbool.h>
#include<math.h>

bool SNT(int n);
int main()
{
    int x;
    int count = 0;
    int i;

    printf("Nhap x: ");
    scanf("%d", &x);

    if(SNT(x)){
        printf("%d la so nguyen to",x);
    }
    else {
        printf("%d khong la so nguyen to", x);
    }
    return 0;
}

bool SNT(int n){
    if(n<2)
        return false;
    for(int i = 2; i <= n/2; i++){
        if(n % i == 0)
            return false;
    }
    return true;
}
