#include<stdio.h>
int main(){
	float phanTramVay;
	printf("Nhap phan tram vay (0 -> 1): ");
	scanf("%f", &phanTramVay);
	float phanTramTraTruoc = 1.0 - phanTramVay;
	
	double soTien = 500000000;
	double laiSuat = 0.072/12; // 7,2% / 1 nam
	double kyHan = 228; // ky han 24 nam 24*12
	double tienTraTruoc = soTien * phanTramTraTruoc;
	
	soTien -= tienTraTruoc; // so tien phai tra
	printf("\nSO TIEN VAY: %.0lf VND", soTien);
	double gocHangThang = soTien/kyHan;
	double tong=0;
	
	printf("\nSO TIEN TRA TRUOC: %.0lf VND\n", tienTraTruoc);
	printf("\n-----SO TIEN PHAI TRA HANG THANG-----:");
	printf("\nKy han \tLai hang thang \tGoc hang thang \tSo tien hang thang\tSo tien con lai");
	for( int i=1; i<=kyHan; i++){
		double traLai = soTien*laiSuat;
		double tienHangThang = traLai + gocHangThang;
		tong += tienHangThang;
		soTien -= gocHangThang;
		printf("\n  %d\t%.0lf\t\t%.0lf\t\t%.0lf\t\t\t%.0lf\n",i,traLai,gocHangThang,tienHangThang,soTien);
	}
	printf("TONG TIEN PHAI TRA TRONG 24 NAM (da tra truoc %.1f\%): %0.lf.",phanTramTraTruoc, tong);
	return 0;
}
