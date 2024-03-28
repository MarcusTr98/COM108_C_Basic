#include <stdio.h>
main()
// Nhap a va b >> Tong hieu 2 so
{
	int a, b, tong, hieu;
	printf("Nhap vao so a: ");
	scanf("%d", &a);
	printf("\nNhap vao so b: ");
	scanf("%d", &b);
	tong= a+b;
	hieu= a-b;
	
	printf("Tong cua a + b la: %d", tong);
	printf("\nHieu cua a - b la: %d", hieu);
	return 0;
}
