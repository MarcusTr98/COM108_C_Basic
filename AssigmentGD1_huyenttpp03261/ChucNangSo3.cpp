#include<stdio.h>
int main(){
	int bd, kt;
	float pay, giam30;
	do{
		printf("Nhap gio bat dau: ");
		scanf("%d", &bd);
		printf("Nhap gio ket thuc: ");
		scanf("%d", &kt);
		if(bd<12 || kt >23){
			printf("Gio khong hop le, nhap lai tu 12h-23h!\n");
		}
	}while(bd<12 || kt >23);
	int time = kt-bd;
	printf("So gio da su dung la: %d", time);
	if(time<=3){
		pay = 150000*time;
	}else{
		giam30 = (time-3)*150000*0.7;
		pay = 150000*3 + giam30;
	}
	if(bd>=14 && bd<=17){
		pay*=0.9;
	}
	printf("\nSo tien phai tra la: %.2f",pay);
}
