#include <stdio.h>
int main(){
    char mssv[]="PS52192";
    char hoten[]="Nguyen Le Duy Tan";
    float diemtoan=7.5;
    float diemsu=8.0;
    float diemdia=8.0; 
    float diemtrungbinh = (diemtoan + diemsu + diemdia)/3;
    printf("ma so sinh vien: %s\n",mssv );
    printf("ho va ten: %s\n",hoten);
    printf("diem toan: %.2f\n",diemtoan);
    printf("diem su: %.2f\n",diemsu);
    printf("diem dia: %.2f\n",diemdia);
    printf("diem trung binh: %.2f\n",diemtrungbinh);
    return 0;
}