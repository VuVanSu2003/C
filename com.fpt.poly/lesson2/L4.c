#include <stdio.h>
// 
int main(){
    // Nhap diem Toan, Ly, Hoa => Tinh DTB
    // He so Toan *3| Ly * 2| Hoa * 1
    float toan, ly, hoa, dtb;
    printf("Nhap diem Toan: ");
    scanf("%f", &toan);
    printf("Nhap diem Ly: ");
    scanf("%f", &ly);
    printf("Nhap diem Hoa: ");
    scanf("%f", &hoa);
    dtb = (toan*3 + ly*2 + hoa) / 6;
    printf("Diem Toan = %.f,\tLy = %.f,\tHoa = %.f,\tDTB = %.f",toan,ly,hoa,dtb);
    return 0;
}