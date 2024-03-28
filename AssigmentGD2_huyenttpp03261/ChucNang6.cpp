#include<stdio.h>
int main(){
	int kyHan = 12;
    float soTien, laiSuat=0.05 ,tong;
    printf("Ban muon vay bao nhieu: ");
	scanf("%f",&soTien);
    float gocPhaiTra = soTien/kyHan; // $Goc tra hang thang
    printf("\nSo tien can tra hang thang: ");
    printf("\nKy han\tLai phai tra\tGoc phai tra\tTien phai tra\tGoc con lai");
    for(int i=1;i<=kyHan;i++){
        float laiPhaiTra = soTien * laiSuat; // $Lai tra hang thang
        float tienPhaiTra = laiPhaiTra + gocPhaiTra; // $ tra hang thang
        tong += tienPhaiTra;
        soTien -= gocPhaiTra;       
    	printf("\n %d\t%.0f\t\t%.0f\t\t%.0f\t\t%.0f\n",i,laiPhaiTra,gocPhaiTra,tienPhaiTra,soTien);
	}
    printf("\nTong tien phai tra sau 12 thang la: %.0f VND",tong);
}
