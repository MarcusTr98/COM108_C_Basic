#include<stdio.h>
struct luanVan{
	char maLuanVan[11], tenLuanVan[101], tenSV[31], giangVien[31];
	short nam;
};
void bai1();
void bai2();
void nhap(luanVan SV[100], int &n);
void xuat(luanVan SV[100], int n);
void sapXep(luanVan SV[100], int n);
void sapXepT(luanVan SV[100], int n);
void bai1(){
	char ten[20], ma[10], lop[10];
	printf("\nNhap ho va ten: "); fflush(stdin); gets(ten);
	printf("Nhap ma SV: "); fflush(stdin); gets(ma);
	printf("Nhap lop: "); fflush(stdin); gets(lop);
	printf("\nIn ra thong tin vua nhap: ");
	printf("\n%s \t%s \t\t%s", "Ho & ten", "Ma SV", "Lop");
	printf("\n%s \t%s \t%s", ten, ma, lop);
}
void bai2(){
	int a[21], n;
	printf("\nNhap vao so luong phan tu <= 20: ");
	scanf("%d", &n);	
	printf("\nNhap vao day so nguyen: ");
	for(int i=0; i<n; i++){
		printf("\nSo %d: ", i+1);
		scanf("%d", &a[i]);
	}
	int dem=0, tong=0;
	for(int i=0; i<n; i++){
		if( a[i]%3==0 ){
			dem++;
			tong+=a[i];
		}
	}
	printf("\nTrung binh cong cac so chia het cho 3: %.2f", (float)tong/dem);
}
void nhap(luanVan SV[100], int &n){
	printf("\nNhap so luong Luan Van: "); scanf("%d", &n);
	for(int i=0; i<n; i++){
		printf("\nNhap thong tin Luan Van %d: ", i+1);
		printf("\nNhap ma Luan Van: "); fflush(stdin);  gets(SV[i].maLuanVan);
		printf("\nNhap ten Luan Van: "); fflush(stdin);  gets(SV[i].tenLuanVan);
		printf("\nNhap ten SV: "); fflush(stdin);	gets(SV[i].tenSV);
		printf("\nNhap ten Giang vien: "); fflush(stdin);	gets(SV[i].giangVien);
		printf("\nNhap nam thuc hien: "); scanf("%d", &SV[i].nam);
	}
}
void xuat(luanVan SV[100], int n){
	printf("\nThong tin luan van.");
	printf("\n%s \t%s \t%s \t\t%s \t\t%s", "Ma Luan Van", "Ten Luan Van", "Ten Sinh Vien", "Ten Giang Vien", "Nam thuc hien");
	for(int i=0; i<n; i++){
		printf("\n%s \t\t%s \t\t%s \t\t%s \t\t%d", SV[i].maLuanVan, SV[i].tenLuanVan, SV[i].tenSV, SV[i].giangVien, SV[i].nam);
	}
}
void sapXep(luanVan SV[100], int n){
	printf("\nSap xep luan van theo nam giam dan: ");
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(SV[i].nam> SV[j].nam){
				luanVan temp = SV[i];
				SV[i] = SV[j];
				SV[j] = temp;				
			}	
		}
	}xuat(SV, n);
}
void sapXepT(luanVan SV[100], int n){
	printf("\nSap xep luan van theo nam giam dan: ");
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(SV[i].nam< SV[j].nam){
				luanVan temp = SV[i];
				SV[i] = SV[j];
				SV[j] = temp;				
			}	
		}
	}xuat(SV, n);
}
int main(){
	int so, so1, luaChon;
	struct luanVan SV[100];
	int soLuong;
	TIEPCT:
	do{
		printf("\n--------------MENU----------------");
		printf("\n 1. Thong tin ban than");
		printf("\n 2. Tinh trung binh cong trong mang");
		printf("\n 3. Thong tin luan van");
		printf("\n 0. Thoat");
		printf("\n----------------------------------");
		printf("\nMoi nhap lua chon cua ban: ");
		scanf("%d", &so);
		switch(so){
			case 1:
				printf("\nBan da lua chon Thong tin ban than");
				bai1();
				break;
			case 2:
				printf("\nBan da lua chon Tinh trung binh cong trong mang");
				bai2();
				break;
			case 3:
				printf("\nBan da lua chon Thong tin luan van");
				TIEP:
				printf("\n--------------CHUC NANG---------------");
				printf("\n 1. Nhap thong tin luan van");
				printf("\n 2. Xuat thong tin sau khi sap xep theo nam giam dan");
				printf("\n 0. Thoat");
				printf("\n---------------------------------------");
				printf("\nMoi nhap lua chon cua ban: ");
				scanf("%d", &so1);
					switch(so1){
						case 1:
							printf("\nBan da lua chon Nhap thong tin luan van");
							nhap(SV, soLuong);
							goto TIEP;
						case 2:
							printf("\nBan da lua chon Xuat thong tin sau khi sap xep theo nam giam dan");
							sapXep(SV, soLuong);
							sapXepT(SV, soLuong);							
							goto TIEP;
						case 0:
							printf("\nThoat chuc nang");
							goto TIEPCT;
						default:
							printf("\nKhong co chuc nang nay, moi lua chon lai!");
							goto TIEP;														
					}
			case 0:
				printf("\nTHOAT CHUONG TRINH");
				return 0;
			default:
				printf("\nKhong co chuc nang nay, moi lua chon lai!");							
		}
	}while(!luaChon);
}
