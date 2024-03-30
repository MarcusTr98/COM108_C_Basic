#include<stdio.h>
void bai1();
void bai2();
void nhap(int kc[], int &n);
void xuat(int kc[], int n);
void bai1(){
	char datNuoc[20], thanhPho[20], duong[20];
	int soNha;
	printf("\nMoi nhap vao Dat Nuoc: ");
	fflush(stdin); gets(datNuoc);
	printf("\nMoi nhap vao Thanh Pho: ");
	fflush(stdin); gets(thanhPho);
	printf("\nMoi nhap vao ten Duong: ");
	fflush(stdin); gets(duong);
	printf("\nMoi nhap vao so nha: ");
	scanf("%d", &soNha);
	printf("Xuat ra thong tin: ");
	printf("\n%s \t%s \t%s \t%s", "Dat Nuoc", "Thanh Pho", "Ten Duong", "So Nha");
	printf("\n%s \t%s \t%s \t\t%d", datNuoc, thanhPho, duong, soNha);		
}
void bai2(){
	int diem;
	printf("\nMoi nhap diem Tieng anh cua SV (1 -> 100): ");
	scanf("%d", &diem);
	if(diem>80){
		printf("Gioi");
	}else if(diem>50){
		printf("Kha");
	}else{
		printf("Truot");
	}
}
void nhap(int kc[], int &n){
	printf("\nNhap so luong laptop: ");
	scanf("%d", &n);
	printf("\nNhap kich co cho tung Laptop: ");
	for(int i=0; i<n; i++){
		printf("\nLaptop %d: ", i+1);
		scanf("%d", &kc[i]);
	}
}
void xuat(int kc[], int n){
	printf("\nSo luong Laptop la: %d", n);
	int dem=0;
	for(int i=0; i<n; i++){
		if(kc[i]%2==0){
			dem++;
		}
	}
	printf("\nSo luong Laptop co kich co chia het cho 2 la: %d", dem);
	for(int i=0; i<n; i++){	
		for(int j=0; j<n; j++){
			if(kc[i]>kc[j]){
				int temp = kc[i];
				kc[i] = kc[j];
				kc[j] = temp;
			}
		}
	}
	printf("\nSap xep kich co giam dan la: ");
	for(int i=0; i<n; i++){
		printf("%d ", kc[i]);
	}
}
int main(){
	int so, so1, luaChon;
	int kc[100], soluong;
	TIEP:
	do{
		printf("\n+---------------Menu--------------+");
		printf("\n\t1. Thong tin ca nhan.");
		printf("\n\t2. Xep loai diem.");
		printf("\n\t3. Thong tin Laptop.");
		printf("\n\t0. THOAT CHUONG TRINH.");
		printf("\n+---------------------------------+");
		printf("\nMoi nhap lua chon cua ban: ");
		scanf("%d", &so);
		switch(so){
			case 1:
				printf("\nBan da chon Thong tin ca nhan.");
				bai1();
				break;
			case 2:
				printf("\nBan da chon Xep loai diem.");
				bai2();
				break;
			case 3:
				printf("\nBan da chon Thong tin Laptop.");
				TIEPCN:
				printf("\n+------------Chuc nang-------------+");
				printf("\n\t1. Thong tin Laptop.");
				printf("\n\t2. Xuat thong tin Laptop.");
				printf("\n\t0. THOAT CHUC NANG.");
				printf("\n+----------------------------------+");												
				printf("\nMoi lua chon chuc nang: ");
				scanf("%d", &so1);				
				switch(so1){
					case 1:
						printf("\nBan da chon Thong tin Laptop.");
						nhap(kc, soluong);
						goto TIEPCN;
					case 2:
						printf("\nBan da chon Xuat thong tin Laptop.");
						xuat(kc, soluong);
						goto TIEPCN;
					case 0:
						printf("\nBan da chon THOAT CHUC NANG.");
						goto TIEP;						
					default:
						printf("\nKhong co chuc nang nay, vui long chon lai!");
						goto TIEPCN;
					}
				break;
			case 0:
				printf("\n4. THOAT CHUONG TRINH.");
				return 0;
			default:
				printf("Khong co lua chon nay, xin moi nhap lai!");						
		}
	}while(!luaChon);
}
