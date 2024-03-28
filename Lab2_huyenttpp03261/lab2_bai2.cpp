#include <stdio.h>
main()
// nhap vao cd, cr >> Chu vi & dien tich
{
	int a,b, chuVi, dienTich;
	printf("Nhap vao chieu dai hinh chu nhat: ");
	scanf("%d",&a);
	printf("\nNhap vao chieu rong hinh chu nhat: ");
	scanf("%d",&b);
	chuVi = (a+b)*2;
	dienTich = a*b;
	printf("\nChu  vi hinh chu nhat la: %d", chuVi);
	printf("\nDien tich hinh chu nhat la: %d", dienTich);
	return 0;
}
