#include<stdio.h>
#include<math.h>
struct PhanSo{
	int tu;
	int mau;
};
void rutGon(PhanSo *ps){ // Tim USCLN
	int a = ps->tu;
	int b = ps->mau;
	a = abs(a);
	b = abs(b);
	int USCLN =1;
	if(a==0 || b==0){
		USCLN = (a+b);
	}else{
		while(a!=b){
			if(a>b){
				a = a-b;
			}else{
				b = b-a;
			}
		}USCLN = a;	
	}
	ps->tu/=USCLN;
	ps->mau/=USCLN;
}
void nhapPhanSo(PhanSo *ps){
	printf("\nNhap vao tu so: ");
	scanf("%d", &ps->tu);
	do{
		printf("Nhap vao mau so: ");
		scanf("%d", &ps->mau);
	}while(ps->mau==0);
}
void inPhanSo(PhanSo ps){
	if(ps.mau<0){
		ps.tu*=-1;
		ps.mau*=-1;
	}
	rutGon(&ps);
	if(ps.mau==1){
		printf("%d", ps.tu);
	}else{
		printf("%d/%d", ps.tu, ps.mau);
	}
}
PhanSo cong(PhanSo ps1, PhanSo ps2){
	PhanSo kq;
	kq.tu = ps1.tu*ps2.mau + ps2.tu*ps1.mau;
	kq.mau = ps1.mau*ps2.mau;
	return kq;
}
PhanSo tru(PhanSo ps1, PhanSo ps2){
	PhanSo kq;
	kq.tu = ps1.tu*ps2.mau - ps2.tu*ps1.mau;
	kq.mau = ps1.mau*ps2.mau;
	return kq;
}
PhanSo nhan(PhanSo ps1, PhanSo ps2){
	PhanSo kq;
	kq.tu = ps1.tu*ps2.tu;
	kq.mau = ps1.mau*ps2.mau;
	return kq;
}
PhanSo chia(PhanSo ps1, PhanSo ps2){
	PhanSo kq;
	kq.tu = ps1.tu*ps2.mau;
	kq.mau = ps1.mau*ps2.tu;
	return kq;
}
int main(){
	PhanSo ps1, ps2;
	printf("\nPhan so thu nhat: ");
	nhapPhanSo(&ps1);
	printf("\nPhan so thu hai: ");
	nhapPhanSo(&ps2);
	printf("\nRut gon 2 phan so vua nhap: ");
	inPhanSo(ps1);
	printf(" & ");
	inPhanSo(ps2);
	printf("\nCAC PHEP TINH!\n");
	inPhanSo(ps1); printf(" + "); inPhanSo(ps2); printf(" = "); inPhanSo(cong(ps1, ps2));	
	printf("\n");
	inPhanSo(ps1); printf(" - "); inPhanSo(ps2); printf(" = "); inPhanSo(tru(ps1, ps2));
	printf("\n");	
	inPhanSo(ps1); printf(" * "); inPhanSo(ps2); printf(" = "); inPhanSo(nhan(ps1, ps2));
	printf("\n");
	inPhanSo(ps1); printf(" : "); inPhanSo(ps2); printf(" = "); inPhanSo(chia(ps1, ps2));	
}
