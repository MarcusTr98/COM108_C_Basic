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
void Xuat(SinhVien sv[], int n);
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
void Xuat(SinhVien sv[], int n){
    printf("\nTHONG TIN SINH VIEN!\n");
    for(int i=0; i< n; i++){
    	printf("SINH VIEN %d\n", i+1);
		printf("MSSV: %s\n", sv[i].MaSV);
		printf("Ten SV: %s\n", sv[i].TenSV);
		printf("Nganh hoc: %s\n", sv[i].Nganh);
		printf("Lop hoc: %s\n", sv[i].Lop);
		printf("Diem TB: %.2f\n", sv[i].diemTB);
    	printf("\n");
    }
}
int main(){
	int n;
	char MSSV[8];
    SinhVien sv[100];
    int q=0, so;
    do{
    	printf("\n");
        printf("+-----------------------------------------------+\n");
        printf("|******* CHUONG TRINH QUAN LY SINH VIEN ********|\n");
        printf("|\t1. Nhap SV vao danh sach.\t\t|\n");
        printf("|\t2. Hien thi danh sach SV.\t\t|\n");  		    
        printf("|\t3. THOAT CHUONG TRINH.\t\t\t|\n");
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
                printf("\nTHOAT CHUONG TRINH!");
                return 0;                
            default:
                printf("\nKhong co chuc nang nay!");
                printf("\nXin moi nhap lai!");
                break;
        }
    }while(!q);
}
