    #include <stdio.h>
    #include <math.h>

    int main()
    {
        int chon;
        do
        {
            printf("\n------ MENU ------\n");
            printf("1. Tinh hoc luc\n");
            printf("2. Giai phuong trinh bac nhat\n");
            printf("3. Giai phuong trinh bac hai\n");
            printf("4. Tinh tien dien\n");
            printf("0. Thoat\n");
            printf("Chon chuc nang: ");
            scanf("%d", &chon);

            switch (chon)
            {
            case 1:
            {
                float diem;
                printf("Nhap diem trung binh: ");
                scanf("%f", &diem);
                if (diem >= 8.0)
                    printf("Hoc luc: Gioi\n");
                else if (diem >= 6.5)
                    printf("Hoc luc: Kha\n");
                else if (diem >= 5.0)
                    printf("Hoc luc: Trung binh\n");
                else
                    printf("Hoc luc: Yeu\n");
                break;
            }
            case 2:
            {
                float a, b;
                printf("Nhap a, b (ax + b = 0): ");
                scanf("%f%f", &a, &b);
                if (a == 0)
                {
                    if (b == 0)
                        printf("Phuong trinh vo so nghiem\n");
                    else
                        printf("Phuong trinh vo nghiem\n");
                }
                else
                {
                    printf("Nghiem x = %.2f\n", -b / a);
                }
                break;
            }
            case 3:
            {
                float a, b, c, delta;
                printf("Nhap a, b, c (ax^2 + bx + c = 0): ");
                scanf("%f%f%f", &a, &b, &c);
                if (a == 0)
                {
                    if (b == 0)
                    {
                        if (c == 0)
                            printf("Phuong trinh vo so nghiem\n");
                        else
                            printf("Phuong trinh vo nghiem\n");
                    }
                    else
                    {
                        printf("Phuong trinh bac nhat, x = %.2f\n", -c / b);
                    }
                }
                else
                {
                    delta = b * b - 4 * a * c;
                    if (delta < 0)
                        printf("Phuong trinh vo nghiem\n");
                    else if (delta == 0)
                        printf("Phuong trinh co nghiem kep x = %.2f\n", -b / (2 * a));
                    else
                    {
                        float x1 = (-b + sqrt(delta)) / (2 * a);
                        float x2 = (-b - sqrt(delta)) / (2 * a);
                        printf("Phuong trinh co 2 nghiem: x1 = %.2f, x2 = %.2f\n", x1, x2);
                    }
                }
                break;
            }
            case 4:
            {
                float soDien, tienDien;
                printf("Nhap so dien tieu thu: ");
                scanf("%f", &soDien);
                if (soDien <= 50)
                    tienDien = soDien * 1.678;
                else if (soDien <= 100)
                    tienDien = soDien * 1.734;
                else if (soDien <= 200)
                    tienDien = soDien * 2.014;
                else if (soDien <= 300)
                    tienDien = soDien * 2.536;
                else if (soDien <= 400)
                    tienDien = soDien * 2.834;
                else
                    tienDien = soDien * 2.927;
                printf("Tien dien phai tra: %.2f VND\n", tienDien);
                break;
            }
            case 0:
                printf("Thoat chuong trinh\n");
                break;
            default:
                printf("Lua chon khong hop le\n");
            }
        } while (chon != 0);

        return 0;
    }
