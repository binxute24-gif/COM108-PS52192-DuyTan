#include <stdio.h> 
#define PI 3.14159 
int main () {
    float cd, cr, r, dthcn, cvhcn, cvht, dtht;
    printf("nhap ban kinh: ");
    scanf("%f", &r);
    printf("nhap chieu dai: ");
    scanf("%f", &cd);
    printf("nhap chieu rong: ");
    scanf("%f", &cr);
    cvhcn = (cd + cr) * 2;
    dthcn = cd * cr;
    dtht = PI * r * r;
    cvht = 2 * PI * r;
    printf("chu vi hinh chu nhat: %.2f\n", cvhcn);
    printf("dien tich hinh chu nhat: %.2f\n", dthcn);
    printf("chu vi hinh tron : %.2f\n", cvht);
    printf("dien tich hinh tron: %.2f\n", dtht);
   return 0;
}