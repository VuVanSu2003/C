#include <stdio.h>
#include <math.h>
void tinhTBT()
{
    int min, max, dem = 0, tong = 0;
    float tbt = 0;
    printf("Nhap min: ");
    scanf("%d", &min);
    printf("Nhap max: ");
    scanf("%d", &max);
    if (min > max || min == max)
    {
        printf("Nhap min hoac max sai\n");
        tinhTBT();
    }
    else
    {
        for (int i = 0; i < max; i++)
        {
            if (i % 2 == 0)
            {
                tong += i;
                dem++;
            }
        }
        tbt = tong / dem;
        printf("Trung binh cong = %f\n", tbt);
    }
}
void timSNT()
{
    float so;
    printf("Nhap so: ");
    scanf("%f", &so);
    if (so < 2)
    {
        printf("%f khong phai so nguyen to\n", so);
    }
    else
    {
        for (int i = 2; i <= sqrt(so); i++)
        {
            if ((int)so % i == 0)
            {
                printf("%f khong phai so nguyen to\n",so);
                return;
            }
        }
        printf("%f la so nguyen to\n",so);
    }
}
void timSCP(){
    float so;
    printf("Nhap so: ");
    scanf("%f", &so);
    if(so <=0){
        printf("%f khong phai so chinh phuong\n");
    }else{
        for (int i = 0; i < sprt(so); i++)
        {
            
        }
        
    }
}
int main(int argc, char const *argv[])
{
    system("cls");
    int chon;
    do
    {
        printf("\n\tMENU\n");
        printf("1. Tinh TBT\n2. Tim SNT\n3. Tim SCP\n0. Thoat\n");
        printf(">> Chon: ");
        scanf("%d", &chon);
        switch (chon)
        {
        case 1:
            tinhTBT();
            break;
        case 2:
            timSNT();
            break;
        default:
            break;
        }
    } while (chon != 0);

    return 0;
}
