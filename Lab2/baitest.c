#include <stdio.h>
#define PI 3.14159

int main() {
    float ban_kinh, chu_vi, dien_tich;

    printf("Nhap ban kinh hinh tron: ");
    scanf("%f", &ban_kinh);

    chu_vi = 2 * PI * ban_kinh;
    dien_tich = PI * ban_kinh * ban_kinh;

    printf("chu vi hinh tron: %.2f\n", chu_vi);
    printf("dien tich hinh tron: %.2f\n", dien_tich);

    return 0;
}