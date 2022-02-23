#include <stdio.h>
//
int main(int argc, char const *argv[])
{
    int dai, rong;
    printf("Nhap dai: ");
    scanf("%d", &dai);
    printf("Nhap rong: ");
    scanf("%d", &rong);
    printf("Dai = %d\nRong = %d\nChu vi = %d\nDien tich = %d\n", dai, rong, ((dai + rong) * 2), (dai * rong));
    return 0;
}
