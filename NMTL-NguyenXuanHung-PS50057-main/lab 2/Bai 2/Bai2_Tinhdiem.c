#include <stdio.h>
#include <stdlib.h>

int main() {
    int diemToan, diemLy, diemHoa, diemTB;

    printf("Nhap diem Toan: ");
    scanf("%d", &diemToan);
    printf("Nhap diem Ly: ");
    scanf("%d", &diemLy);
    printf("Nhap diem Hoa: ");  
    scanf("%d", &diemHoa);

    diemTB = (diemToan * 3 + diemLy * 2 + diemHoa) / 6;

    printf("===KET QUA===\n");
    printf("Diem trung binh: %d\n", diemTB);

    system("pause");
    return 0;
}