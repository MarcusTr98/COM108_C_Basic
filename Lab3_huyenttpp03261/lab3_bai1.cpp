#include <stdio.h>
int main()
// nhap vao diem cua sinh vien => hoc luc
{
	float diem;
	printf("Moi nhap vao diem cua SV: ");
	scanf("%f", &diem);
	
	if(diem>=9){
		printf("Hoc luc Xuat Sac.");
	}
	else if(diem < 9 && diem >= 8){
		printf("Hoc luc Gioi.");
	}
	else if(diem<8 && diem >=6.5){
		printf("Hoc luc Kha.");
	}
	else if(diem <6.5 && diem >=5){
		printf("Hoc luc TBinh.");
	}
	else if(diem <5 && diem >=3.5){
		printf("Hoc luc Yeu.");
	}
	else{
		printf("Hoc luc Kem.");
	}
}
