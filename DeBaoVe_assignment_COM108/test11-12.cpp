#include<stdio.h>
void bai_1();
void bai_2();
void Nhap(float diem[], int &n);
void Xuat(float diem[], int n);

void bai_1(){
	char ten[20];
	char gioiTinh[5];
	int tuoi;
	char diaChi[30];
	printf("\nNhap ten: ");
	fflush(stdin);
	gets(ten);
	printf("Nhap gioi tinh: ");
	fflush(stdin);
	gets(gioiTinh);
	printf("Nhap tuoi: ");
	scanf("%d", &tuoi);
	printf("Nhap dia chi: ");
	fflush(stdin);
	gets(diaChi);
	
	printf("\nIn ra thong tin ca nhan: ");
	printf("\n%s\t\t\t\t %s\t %s\t %s", "Ho ten", "Gioi tinh", "Tuoi", "Dia chi");
	printf("\n%s\t\t\t %s\t\t %d\t %s", ten, gioiTinh, tuoi, diaChi);
}
void bai_2(){
	unsigned int n;
	printf("\nNhap vao so nguyen duong n: ");
	scanf("%u", &n);
	int dem =0, tong=0;
	for(int i=0; i<n; i++){
		if(i%4==0){
			dem++;
			tong+=i;
		}
	}printf("\nDem cac so chia het cho 4: %d so",dem);
	printf("\nTong cac so chia het cho 4 la: %d", tong);
}
// bai 3
void Nhap(float diem[], int &n){
	printf("\nNhap so luong diem cua sinh vien: ");
	scanf("%d", &n);
	printf("\nNhap mang diem thi cua sinh vien");
	for(int i=0; i<n; i++){
		printf("\nDiem thu %d cua SV: ", i+1);
		scanf("%f", &diem[i]);
	}
}
void Xuat(float diem[], int n){
	printf("\nSo luong diem cua sinh vien la: %d", n);
	int dem;
	float tong;
	float max= diem[0];
	for(int i=0; i<n; i++){
		dem++;
		tong+= diem[i];
		if(max < diem[i]){
			max=diem[i];
		}
	}
	printf("\nDiem trung binh cua sinh vien do la: %.2f", tong/dem);
	printf("\nDiem cao nhat cua sinh vien do la: %.2f", max);
}
int main(){
	int luaChon, so, so1;
	float diem[100];
	int n;
	TIEPCT:
	do{
		printf("\n+-----------------Menu-----------------+");
		printf("\n1. Thong tin ban than.");
		printf("\n2. Dem so nguyen theo yeu cau.");
		printf("\n3. Thong tin diem cua SV.");
		printf("\n0. Thoat!");
		printf("\n+--------------------------------------+");
		printf("\nMoi chon chuc nang: ");
		scanf("%d", &so);
		switch(so){
			case 1:
				printf("\nBan da chon 1. Thong tin ban than.");
				bai_1();
				break;
			case 2:
				printf("\nBan da chon 2. Dem so nguyen theo yeu cau.");
				bai_2();
				break;
			case 3:
				printf("\nBan da chon 3. Thong tin diem cua SV.");
				
				TIEP:
				printf("\n+-------------Chuc Nang---------------+");
				printf("\n1. Thong tin SV thi Lap trinh.");
				printf("\n2. Xuat thong tin SV.");
				printf("\n3. Thoat chuc nang!");
				printf("\n+--------------------------------------+");
				printf("\nMoi chon chuc nang: ");
				scanf("%d", &so1);
				switch(so1){
					case 1:
						printf("\nBan da chon 1. Thong tin SV thi Lap trinh.");
						Nhap(diem, n);
						goto TIEP;
					case 2:
						printf("\nBan da chon 2. Xuat thong tin SV.");
						Xuat(diem, n);
						goto TIEP;
					case 3:
						printf("\nBan da chon Thoat Chuc Nang.");
						goto TIEPCT;
					default:
						printf("\nKhong co chuc nang nay.");
						printf("\nXin moi chon lai!");
						goto TIEP;				
				}
			case 0:
				printf("\nThoat chuong trinh!");
				return 0;
			default:
				printf("\nKhong co chuc nang nay.");
				printf("\nXin moi chon lai!");
		}
	} while(!luaChon);
}
