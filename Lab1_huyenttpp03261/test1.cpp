 #include<stdio.h>
 int main()
 {
 	int a, b;
 	printf("Nhap vao so a: ");
 	scanf("%d", &a);
 	printf("Nhap vao so b: ");
 	scanf("%d", &b);
 	
 	int tong = a+b, hieu = a-b, tich=a*b;
 	float thuong= (float)a/b;
 	
 	printf("\nTong cua a va b la: %d", tong);
 	printf("\nHieu cua a va b la: %d", hieu);
 	printf("\nTich cua a va b la: %d", tich);
 	printf("\nThuong cua a va b la: %.2f", thuong);
 	
 	return 0;
 }
