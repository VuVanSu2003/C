#include <stdio.h>
#define Pi 3.14;

int main(int argc, char const *argv[])
{
    int r;
    float c, a;
    printf("Nhap r: ");
    scanf("%d", &r);
    c = 2 * r * Pi;
    a = r * r * Pi;
    printf("R = %d\nChu vi = %.2f\nDien tich = %.2f", r, c, a);
    return 0;
}
