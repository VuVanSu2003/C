#include <stdio.h>
#include <math.h>
void l1(float diem)
{
    //  su dung if() else if() else de xep hoc luc
    printf("Diem = %f", diem);
    if (diem < 3.5)
    {
        printf("Hoc luc: Kem\n");
    }
    else if (diem < 5.0)
    {
        printf("Hoc luc: Yeu\n");
    }
    else if (diem < 6.5)
    {
        printf("Hoc luc: Trung Binh\n");
    }
    else if (diem < 8.0)
    {
        printf("Hoc luc: Kha\n");
    }
    else if (diem < 9.0)
    {
        printf("Hoc luc: Gioi\n");
    }
    else
    {
        printf("Hoc luc: Xuat Sac\n");
    }
}
void l2_1(float a, float b)
{
    // PT bac I
    // Nhap a,b => Tinh no cua pt
    float x;
    if (a == 0)
    {
        if (b == 0)
        {
            printf("Phuong trinh co vo so nghiem\n");
        }
        else
        {
            printf("Phuong trinh vo nghiem\n");
        }
    }
    else
    {
        x = -b / a;
        printf("Phuong trinh co nghiem la: %.2f\n", x);
    }
}
void l2_2(float a, float b, float c)
{
    // Nhap a,b,c => Tinh delta => Tinh nghiem
    float x, x1, x2;
    if (a == 0)
    {
        l2_1(b, c);
    }
    else
    {
        float delta = b * b - 4 * a * c;
        if (delta < 0)
        {
            printf("Phuong trinh vo nghiem\n");
        }
        else if (delta == 0)
        {
            x = -b / (2 * a);
            printf("Phuong trinh co nghiem kep x = %.f\n", x);
        }
        else
        {
            x1 = ((-b + sqrt(delta)) / (2 * a));
            x2 = ((-b - sqrt(delta)) / (2 * a));
            printf("Phuong trinh co 2 nghiem phan biet x1 = %.2f\tx2 = %.2f\n", x1, x2);
        }
    }
}
void l3()
{
    // Nhap dien sd => Tinh tien dien
    float dien, tien;
    printf("Nhap so dien su dung: ");
    scanf("%f", &dien);
    printf("So dien su dung la: %f", dien);
    if (dien <= 50)
    {
        tien = dien * 1.678;
        printf("So tien phai tra la: %f\n", tien);
    }
    else if (dien <= 100)
    {
        tien = dien * 1.734;
        printf("So tien phai tra la: %f\n", tien);
    }
    else if (dien <= 200)
    {
        tien = dien * 2.014;
        printf("So tien phai tra la: %f\n", tien);
    }
    else if (dien <= 300)
    {
        tien = dien * 2.536;
        printf("So tien phai tra la: %f\n", tien);
    }
    else if (dien <= 400)
    {
        tien = dien * 2.834;
        printf("So tien phai tra la: %f\n", tien);
    }
    else
    {
        tien = dien * 2.927;
        printf("So tien phai tra la: %f\n", tien);
    }
}
int main(int argc, char const *argv[])
{
    int chon;
    float diem, a, b, c;
    printf("\n\tMENU\n1.Xep hoc luc\n2. Tinh pt bac 1\n3. Tinh pt bac 2\n4. Tinh tien dien");
    printf("\n>> Chon: ");
    scanf("%d", &chon);
    switch (chon)
    {
    case 1:
        printf("Nhap diem: ");
        scanf("%f", &diem);
        l1(diem);
        break;
    case 2:
        printf("Nhap a = ");
        scanf("%f", &a);
        printf("Nhap b = ");
        scanf("%f", &b);
        l2_1(a, b);
        break;
    case 3:
        printf("Nhap a = ");
        scanf("%f", &a);
        printf("Nhap b = ");
        scanf("%f", &b);
        printf("Nhap c = ");
        scanf("%f", &c);
        l2_2(a, b, c);
        break;
    case 4:
        l3();
        break;
    default:
        printf("Lua chon sai\n");
        break;
    }
    return 0;
}
