#include <stdio.h>
#include <math.h>

void TinhTrungBinh()
{
    int min, max;
    printf("nhap min: ");
    scanf("%d", &min);
    printf("nhap max: ");
    scanf("%d", &max);
    if (min > max)
    {
        printf("min phai nho hon max.\n");
        return;
    }
    int tong = 0, biendem = 0;
    for(int i = min; i<=max; i++)
    {
        if (i % 2 == 0)
        {
            tong += i;
            biendem++;
        }
    }
    if (biendem == 0)
    {
        printf("Khong co so nao chia het cho 2 trong khoang [%d, %d].\n", min, max);
    }
    else
    {
        float trungbinh = (float)tong / biendem;
        printf("Trung binh tong cac so chia het cho 2 la: %.2f\n", trungbinh);
    }

}
int main()
{
    int chon;
    do
    {
        printf("+---------------------------------------------------+\n");
        printf("|            MENU CHUONG TRINH LAB 4.               |\n");
        printf("+---------------------------------------------------+\n");
        printf("| 1. Tinh trung binh tong cac so chia het cho 2     |\n");
        printf("| 2. Kiem tra So nguyen to                          |\n");
        printf("| 3. Kiem tra So chinh phuong                       |\n");
        printf("| 4. Thoat chuong trinh                             |\n");
        printf("+---------------------------------------------------+\n");
        printf("Ban hay chon chuc nang (1 - 4): ");
        scanf("%d",&chon);
        switch (chon)
        {
            case 1:
                printf("Tinh trung binh tong cac so chia het cho 2.\n");
                TinhTrungBinh();
                break;
            case 2:
                printf("Kiem tra so nguyen to.\n");
               
                break;
            case 3:
                printf("Kiem tra so chinh phuong.\n");
             
                break;
            case 4:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("ban hay chon 1-4.\n");
                break;
        }
    }while (chon != 0);
}