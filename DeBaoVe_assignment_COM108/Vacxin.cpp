#include<stdio.h>
struct SinhVien{
	char ten[15];
	char maSV[8];
};
void bai_1();
void bai_2();
void nhapSV();
void xuatSV();

void bai_1(){
	char maVacxin[10];
	char tenVacxin[20];
	int soLuong;
	printf("\nMoi nhap vao ma Vacxin: ");
	fflush(stdin);
	gets(maVacxin);
	printf("Moi nhap vao ten Vacxin: ");
	fflush(stdin);
	gets(tenVacxin);
	printf("Moi nhap vao so luong: ");
	scanf("%d", &soLuong);
	printf("In ra thong tin: ");
	printf("\n|%s\t\t |%s\t\t |%s\t\t ","Ma Vacxin","Ten Vacxin","So luong");
	printf("\n|%s\t\t\t |%s\t\t |%d\t\t ", maVacxin, tenVacxin, soLuong);
}
void bai_2(){
	unsigned int n;
	printf("\nNhap 1 so nguyen duong bat ky: ");
	scanf("%u", &n);
	printf("\nDay so chia het cho 5: ");
	int tong=0;	
	for(int i=1; i<n; i++){
		if(i%5==0){
			printf("%d ", i);
			tong+=i;	
		}
	}
	printf("\nTong cac so chia het cho 5: %d", tong);
}
void nhapSV(float diem[100], int &soLuong){
	printf("\nNhap vao so luong sinh vien: ");
	scanf("%d", &soLuong);
	for(int i=0; i<soLuong; i++){
		printf("\nDiem SV %d: ", i+1);
		scanf("%f", &diem[i]);
	}
}
void xuatSV(float diem[100], int soLuong){
	float diemMax = diem[0];
	int count=0;
	int sv;
	for(int i=0; i<soLuong; i++){
		if(diem[i]>diemMax){
			diemMax= diem[i];
			sv = i+1;	
		}
		if(diem[i]>=5){
			count++;
		}	
	}
	printf("\n");
	printf("\nSV co so diem cao nhat la SV %d : %.2f diem", sv,diemMax);
	printf("\nSo luong sinh vien co diem thi tren TB (diem >=5) la: %d", count);
}
int main(){
	float diem[100];
	int soLuong; //soluong SV
	int luaChon, so, so2;
	do{
		printf("\n+------------------MENU-------------------+");
		printf("\n\t 1. Thong tin Vacxin\t\t");
		printf("\n\t 2. So chia het cho 5\t\t");
		printf("\n\t 3. Thong tin SV thi Lap Trinh\t\t");
		printf("\n\t 0. THOAT CHUONG TRINH\t\t");			
		printf("\n+-----------------------------------------+");
		printf("\nMoi chon: ");
		scanf("%d", &so);
		switch(so){
			case 1:
				printf("Ban da chon 1.Thong tin Vacxin.");
				bai_1();
				break;
			case 2:
				printf("Ban da chon 2.So chia het cho 5.");
				bai_2();
				break;
			case 3:
				printf("\nBan da chon 3.Thong tin SV thi Lap Trinh.");
				TIEPCN :
				printf("\n");
				printf("\n+-------------Thong tin K19.3---------------+");
				printf("\n\t3.1 Nhap thong tin SV, diem thi");
				printf("\n\t3.2 Xuat thong tin SV");
				printf("\n\t3.3 Thoat chuc nang!");
				printf("\n+-------------------------------------------+");
				printf("\nXin moi nhap lua chon: ");
				scanf("%d", &so2);
				switch(so2){
					case 1:
						printf("\nBan da chon: 3.1 Nhap thong tin SV, diem thi");
						nhapSV(diem, soLuong);
						goto TIEPCN;
					case 2:
						printf("\nBan da chon: 3.2 Xuat thong tin SV");
						xuatSV(diem, soLuong);
						goto TIEPCN;
					default:
						printf("\nThoat chuc nang!");		
				}
				break;
			case 0:
				printf("THOAT CHUONG TRINH. BYE BYE!");
				return 0;
			default:
				printf("Khong co chuc nang nay!");
				printf("\nXin moi nhap lai 0 -> 3");
		}
	}while(!luaChon);
	return 0;
}
