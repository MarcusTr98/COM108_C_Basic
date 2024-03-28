#include<stdio.h>
#include<math.h>
// B1 nhap 3 canh tgiac => dien tich, chu vi
// su dung them thu vien math
// Chua du dieu kien de xac nhan 3 canh nay la 3 canh cua tam giac
int main()	
{
	float a,b,c;
	printf("Nhap vao canh a cua tam giac: ");
	scanf("%f", &a);
	printf("Nhap vao canh b cua tam giac: ");
	scanf("%f", &b);
	printf("Nhap vao canh c cua tam giac: ");
	scanf("%f", &c);
	
	if( a+b>c && b+c>a && a+c>b ){
		printf("\nDay la 3 canh cua 1 tam giac.");
		
	float chuVi, dienTich, p; // p = 1/2 chu vi
	chuVi= a+b+c;
	p= chuVi/2;
	dienTich= sqrt( p*(p-a)*(p-b)*(p-c) ); //cong thuc Heron
	
	printf("\nChu vi tam giac la: %f", chuVi);
	printf("\nDien tich tam giac la: %f", dienTich);
	
	}
	
	else{
		printf("\nDay ko phai la 3 canh cua 1 tam giac.");
	}
	
	return 0;
}
