#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Nhap vao ngay: ");
	scanf("%2d", &a);
	printf("Nhap vao thang: ");
	scanf("%2d", &b);
	printf("Nhap vao nam: ");
	scanf("%4d", &c);
	
	printf("Thang %2d ngay %2d nam %4d", b,a,c);
}
