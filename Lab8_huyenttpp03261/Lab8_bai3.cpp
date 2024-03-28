#include <stdio.h> 
#include <string.h>
struct SinhVien{
    char MaSV[8];
    char TenSV[50];
    char Nganh[30];
    char Lop[10];
    float diemTB;
};
void Nhap(SinhVien sv[], int &n);
void inSinhVien(SinhVien sv);
void Xuat(SinhVien sv[], int n);
void SapXepDiem(SinhVien ds[], int n);
void TimKiemSV(SinhVien ds[]);
void Nhap(SinhVien sv[], int &n){
	printf("\nNhap so sinh vien muon them: ");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        printf("\nNHAP THONG TIN SINH VIEN: %d!\n",i+1);
		do{
			printf("Nhap MSSV: ");
        	fflush(stdin);
        	gets(sv[i].MaSV);
        	if( strlen(sv[i].MaSV) !=7 ){ 
				printf("\nNhap lai MSSV, toi da 7 ky tu!\n");        		
			}
		}while( strlen(sv[i].MaSV) !=7 );
        printf("Nhap ten SV: ");
        fflush(stdin);
        gets(sv[i].TenSV);
        printf("Nhap nganh hoc: ");
        fflush(stdin);
        gets(sv[i].Nganh);
        printf("Nhap lop hoc: ");
        fflush(stdin);
        gets(sv[i].Lop);
        printf("Nhap DTB: ");
        scanf("%f", &sv[i].diemTB);
    }
}
void inSinhVien(SinhVien sv){
		printf("MSSV: %s\n", sv.MaSV);
		printf("Ten SV: %s\n", sv.TenSV);
		printf("Nganh hoc: %s\n", sv.Nganh);
		printf("Lop hoc: %s\n", sv.Lop);
		printf("Diem TB: %.2f\n", sv.diemTB);
}
void Xuat(SinhVien sv[], int n){
    printf("\nTHONG TIN SINH VIEN!\n");
    for(int i=0; i<n; i++){
    	printf("\nSinh vien %d!\n",i+1);
		inSinhVien(sv[i]);
    	printf("\n");
    }
}
void SapXepDiem(SinhVien ds[], int n){ // tang dan
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(ds[i].diemTB > ds[j].diemTB){
				SinhVien Temp;				
				Temp = ds[j];
				ds[j] = ds[i];
				ds[i] = Temp;			
			}
		}
	}Xuat(ds ,n);
}
void TimKiemSV(SinhVien ds[]){
    char MSSV[8];
    int count=0, i;
    printf("\nNhap ma sinh vien can tim: ");
    fflush(stdin);
    gets(MSSV);
	for(i=0; i< strlen(ds[i].MaSV); i++){
		if( strcmp( ds[i].MaSV, MSSV) == 0){
			count++;
			printf("TIM THAY SINH VIEN!");
			inSinhVien(ds[i]);
		}
    }
    if(count == 0){
    	printf("KHONG TIM THAY SINH VIEN!");
	}
}
int main(){
	int n;
	int index;
	char MSSV[8];
    SinhVien sv[100];
    int q=0, so;
    do{
    	printf("\n");
        printf("+-----------------------------------------------+\n");
        printf("|******* CHUONG TRINH QUAN LY SINH VIEN ********|\n");
        printf("|\t1. Nhap SV vao danh sach.\t\t|\n");
        printf("|\t2. Hien thi danh sach SV.\t\t|\n");  
        printf("|\t3. Sap xep danh sach SV.\t\t|\n");
        printf("|\t4. Tim kiem thong tin SV.\t\t|\n");			    
        printf("|\t5. THOAT CHUONG TRINH.\t\t\t|\n");
        printf("+-----------------------------------------------+\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d",&so);
        switch(so){
            case 1:
            	printf("\nBan da chon Them moi SV vao danh sach!");
                Nhap(sv ,n);
                break;
            case 2:
                printf("\nBan da chon Hien thi danh sach SV!");
                Xuat(sv ,n);
                break;
            case 3:
                printf("\nBan da chon Sap xep danh sach SV!");
                SapXepDiem(sv, n);
                break;
            case 4:
                printf("\nBan da chon tim kiem thong tin SV!");
                TimKiemSV(sv);
                break;                
            case 5:
                printf("\nTHOAT CHUONG TRINH!");
                return 0;                
            default:
                printf("\nKhong co chuc nang nay!");
                printf("\nXin moi nhap lai!");
                break;
        }
    }while(!q);
}
