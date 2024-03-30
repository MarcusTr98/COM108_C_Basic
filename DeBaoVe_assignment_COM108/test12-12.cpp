#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct date{
	int ngay, thang, nam;
};
struct nhanVien{
	char ma[6], ten[20];
	date ngaySinh;
	int ngayCong;
	long long luong;
};
void nhap(int arr[], int &n);
void xuat(int arr[], int n);
void sapXepTang(int arr[], int n);
void sapXepGiam(int arr[], int n);
void nhapNV(nhanVien NV[], int &n);
void inNV(nhanVien NV);
void xuatNV(nhanVien NV[], int n);
void sapXepNV(nhanVien NV[], int n);
void sapXepLuong(nhanVien NV[], int n);

void nhap(int arr[], int &n){
	printf("\nNhap vao so nguyen n: ");
	scanf("%d", &n);
	printf("Nhap mang: \n");	
	for(int i=0; i<n; i++){
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}
void xuat(int arr[], int n){
	printf("\nXuat mang: ");
	for(int i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
}
void sapXepTang(int arr[], int n){
	printf("\nSap xep tang dan: ");
	for(int i=0; i<n ;i++){
		for(int j=0; j<n; j++){
			if(arr[i]< arr[j]){
				int temp = arr[i];
				arr[i]= arr[j];
				arr[j]= temp;
			}
		}
	}
}
void sapXepGiam(int arr[], int n){
	printf("\nSap xep giam dan: ");
	for(int i=0; i<n ;i++){
		for(int j=0; j<n; j++){
			if(arr[i]> arr[j]){
				int temp = arr[i];
				arr[i]= arr[j];
				arr[j]= temp;
			}
		}
	}
}
void nhapNV(nhanVien NV[], int &n){
	printf("\nNhap so luong nhan vien: ");
	scanf("%d", &n);	
	for(int i=0; i<n; i++){
		printf("\nNhan Vien %d: ", i+1);
		printf("\nNhap Ma NV: "); fflush(stdin); gets(NV[i].ma);
		printf("Nhap ho va ten: "); fflush(stdin); gets(NV[i].ten);
		printf("Nhap ngay thang nam sinh: ");	
		scanf("%d%d%d", &NV[i].ngaySinh.ngay, &NV[i].ngaySinh.thang, &NV[i].ngaySinh.nam);
		printf("Nhap ngay cong: ");	scanf("%d", &NV[i].ngayCong);
		long long luongCB;
		if(NV[i].ngayCong>= 22 && NV[i].ngayCong<=25){
			luongCB =200000;
			NV[i].luong = 180000*22 + luongCB*(NV[i].ngayCong-22);
		}else if(NV[i].ngayCong>= 26 && NV[i].ngayCong<=30){
			luongCB =250000;
			NV[i].luong = 180000*22 + 200000*3 + luongCB*(NV[i].ngayCong-25);
		}
	}
}
void inNV(nhanVien NV){
	printf("\n%s \t%s \t%2d/%2d/%4d \t%d",
	NV.ma, NV.ten, NV.ngaySinh.ngay, NV.ngaySinh.thang, NV.ngaySinh.nam, NV.ngayCong);
	printf("\n");
}
void xuatNV(nhanVien NV[], int n){
	printf("\nXuat thong tin NVien: ");
	printf("\n%s \t%s \t%s \t%s", "Ma NV", "Ho va Ten", "Ngay sinh", "Ngay cong");
	for(int i=0; i<n; i++){
		inNV( NV[i] );
	}
}
void sapXepNV(nhanVien NV[], int n){
	printf("\nSap xep theo ngay cong giam dan: ");
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(NV[i].ngayCong > NV[j].ngayCong){
				nhanVien temp = NV[i];
				NV[i]= NV[j];
				NV[j]= temp;
			}
		}
	}
	printf("\n");
	xuatNV( NV, n);
}
void inNV2(nhanVien NV){
	printf("\n%s \t%s \t%2d/%2d/%4d \t%d \t\t%ld",
	NV.ma, NV.ten, NV.ngaySinh.ngay, NV.ngaySinh.thang, NV.ngaySinh.nam, NV.ngayCong, NV.luong);
	printf("\n");
}
void xuatNV2(nhanVien NV[], int n){
	printf("\nXuat thong tin NVien: ");
	printf("\n%s \t%s \t%s \t%s \t%s", "Ma NV", "Ho va Ten", "Ngay sinh", "Ngay cong", "Luong");
	for(int i=0; i<n; i++){
		inNV2( NV[i] );
	}
}
void sapXepLuong(nhanVien NV[], int n){
	for(int i=0; i<n ;i++){
		for(int j=0; j<n; j++){
			if(NV[i].luong < NV[j].luong){
				nhanVien temp = NV[i];
				NV[i]= NV[j];
				NV[j]= temp;
			}
		}
	}
	printf("\n");
	xuatNV2( NV, n);
}
int main(){
	int n, arr[100];
	int a;
	nhanVien NV[100];
	int so, so1, so2 ,luaChon;
	TIEPCT:
	do{
		printf("\n---------------Menu-------------");
		printf("\n\t1. Lam viec voi mang.");
		printf("\n\t2. Quan ly Nhan Vien");
		printf("\n\t3. THOAT.");	
		printf("\n--------------------------------");	
		printf("\nMoi nhap lua chon: ");
		scanf("%d", &so);
		switch(so){
			case 1:
				printf("\nBan da chon: Lam viec voi mang.");
				TIEPCN1:
				printf("\n----------Chuc nang-----------");
				printf("\n\t1. Nhap mang.");				
				printf("\n\t2. Sap xep tang dan.");
				printf("\n\t3. Sap xep giam dan.");
				printf("\n\t4. THOAT.");	
				printf("\n------------------------------");	
				printf("\nMoi nhap lua chon: ");
				scanf("%d", &so1);
				switch(so1){
					case 1:
						printf("\n1: Nhap mang.");
						nhap(arr,n );
						xuat(arr,n );
						goto TIEPCN1;
					case 2:
						printf("\n2: Sap xep tang dan.");
						sapXepTang(arr, n);
						xuat(arr, n);
						goto TIEPCN1;
					case 3:
						printf("\n3: Sap xep giam dan.");
						sapXepGiam(arr, n);
						xuat(arr, n);
						goto TIEPCN1;				
					case 4:
						printf("\n4: Thoat chuc nang.");
						goto TIEPCT;
					default:
						printf("\nKhong co lua chon nay, vui long chon lai!");
						goto TIEPCN1;											
				}
				break;
			case 2:
				printf("\nBan da chon: Quan ly Nhan Vien.");
				TIEPCN2:
				printf("\n------------------Chuc nang-------------------");
				printf("\n 1: Nhap thong tin NV.");				
				printf("\n 2: Xuat thong tin NV theo ngay cong giam dan.");
				printf("\n 3: Xuat thong tin NV co muc luong tang dan.");
				printf("\n 4: THOAT.");	
				printf("\n----------------------------------------------");	
				printf("\nMoi nhap lua chon: ");
				scanf("%d", &so2);
				switch(so2){
					case 1:
						printf("\n1: Nhap thong tin NV.");
						nhapNV(NV, a);
						xuatNV(NV, a);
						goto TIEPCN2;
					case 2:
						printf("\n2: Xuat thong tin NV theo ngay cong giam dan.");
						sapXepNV(NV, a);
						goto TIEPCN2;
					case 3:
						printf("\n3: Xuat thong tin NV co muc luong tang dan.");
						sapXepLuong(NV, a);
						goto TIEPCN2;				
					case 4:
						printf("\n4: Thoat chung nang.");
						goto TIEPCT;
					default:
						printf("\nKhong co lua chon nay, vui long chon lai!");
						goto TIEPCN2;										
				}
				break;
			case 3:
				printf("\n3: Thoat.");
				return 0;
			default:
				printf("\nKhong co lua chon nay, vui long chon lai!");						
		}
	}while(!luaChon);
	return 0;
}
