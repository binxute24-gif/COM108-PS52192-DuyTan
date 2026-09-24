#include <stdio.h>
int main() {
    float diemtoan, diemly, diemhoa, diemtrungbinh;
    //nhap diem
    printf("nhap diem Toan: "); 
    scanf("%f", &diemtoan);
    printf("nhap diem Ly: ");
    scanf("%f", &diemly);
    printf("nhap diem Hoa: ");
    scanf("%f", &diemhoa);
    //tinh diem trung binh
    diemtrungbinh = (diemtoan * 3 + diemly * 2 + diemhoa) / 6;
    //xuat diem trung binh
    printf("diem Toan: %.2f\n", diemtoan);
    printf("diem Ly: %.2f\n", diemly);
    printf("diem Hoa: %.2f\n", diemhoa);
    printf("diem trung binh: %.2f\n", diemtrungbinh);
    return 0;
}
