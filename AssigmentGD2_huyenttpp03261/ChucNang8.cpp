#include<stdio.h>
#include<string.h>
struct SinhVien{
	char ten[50];
	float diem;
};
int main(){
	int n;
	float temp;
	char name[50];
	printf("Nhap vao so sinh vien can sap xep: ");
	scanf("%d", &n);
	struct SinhVien sv[n];
	
	for( int i=0; i<n; i++){
		printf("\n---NHAP THONG TIN SV %d!", i+1);
		printf("\nNhap ten SV: ");
        fflush(stdin);
		gets(sv[i].ten);
		printf("Nhap diem SV: ");
		scanf("%f", &sv[i].diem);			
	}
	for( int i=0; i<n; i++){
		for( int j=0; j<n; j++){
			if(sv[i].diem>sv[j].diem){
				temp= sv[i].diem;
				sv[i].diem = sv[j].diem;
				sv[j].diem = temp;
				// coppy name
                strcpy(name, sv[i].ten);
                strcpy(sv[i].ten, sv[j].ten);
                strcpy(sv[j].ten, name);
			}
		}
	}
	printf("\n---DANH SACH SINH VIEN SAP XEP THEO THU TU DIEM GIAM DAN!");	
	for( int i=0; i<n; i++){
		printf("\n");
		printf("SST %d)", i+1);
		printf("\nTen SV %s.", sv[i].ten);
		printf("\nDiem TB SV %.1f", sv[i].diem);
		if(sv[i].diem>=9.0){
			printf("\nHoc luc Xuat sac!");
		}
		else if(sv[i].diem>=8.0){
			printf("\nHoc luc Gioi!");
		}
		else if(sv[i].diem>=6.5){
			printf("\nHoc luc Kha!");
		}
		else if(sv[i].diem>=5.0){
			printf("\nHoc luc Trung Binh!");
		}else{
			printf("\nHoc luc Yeu!");
		}				
	}
}
