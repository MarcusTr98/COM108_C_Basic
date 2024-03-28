#include <stdio.h>
int main()
{
	// #define
	const float PI = 3.14;
	float r, chuVi, dienTich;
	
	printf("Nhap vao ban kinh r: ");
	scanf("%f", &r);
	
	if(r<=0){
		printf("Nhap lai ban kinh r.");
	}
	else{
	chuVi= 2*r*PI;
	dienTich= PI*r*r;
	printf("\nChu vi hinh tron la: %.2f", chuVi);
	printf("\nDien tich hinh tron la: %.2f", dienTich);
    }
		
	return 0;
	// case test: r=5 >> chuvi = 31.40, dientich = 78.50
}
