#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
// 1
void chucNang1(){
	float a;
	printf("\nMoi nhap so de kiem tra: ");
	scanf("%f", &a);
	if (a == (int)a) {
		printf("%.2f la so Nguyen.\n", a);
	}else{
		printf("%.2f ko phai la so Nguyen.\n", a);
	}
	if ( a>1 && a==(int)a ){
		int mark =0;
		for( int i=2; i <= a-1 ; i++){
			if( (int)a % i ==0 ){
				mark=1;
				break;
			}
		}
		if(mark==0){
			printf("%.2f la so Nguyen To.\n", a);
		}else if(mark==1)
			printf("%.2f khong phai la so Nguyen To.\n", a);	
	}else
		printf("%.2f khong phai la so Nguyen To.\n", a);	
	int mark1=0;
	for( int j=1; j<a-1; j++ ){
		if(j*j == a){
			mark1++;
			break;
		}
	}
	if(mark1==1){
		printf("%.2f la so Chinh Phuong.", a);
	}else{
		printf("%.2f khong phai la so Chinh Phuong.", a);
	}	
}
// 2
void chucNang2(){
	int a,b, UCLN, BCNN;
	do{
		printf("\nMoi nhap vao so nguyen a: ");
		scanf("%d", &a);
		printf("Moi nhap vao so nguyen b: ");
		scanf("%d", &b);
		if(a<0 || b<0){
			printf("\nKhong hop le! Nhap lai: a,b >= 0.");
		}
	}while(a<0 || b<0);
	if (a>=0 && b>=0){
		if(a==0 && b==0){
			printf("Khong ton tai UCLN va BCNN!\n");
		}else if( a==0 || b==0){
			printf("Khong ton tai BCNN, UCLN la %d.\n", (a==0)?b:a);
		}else{
			int bc = a*b;
			while (a!=b){
				if(a>b){
					a-=b;
				}else{
					b-=a;
				}
			}
			printf("UCLL cua 2 so la: %d.\n", a);
			printf("BCNN cua 2 so la: %d.", bc/a);
		}
	}
}
// 3
void chucNang3(){
	int bd, kt;
	float pay, giam30; //pay = so tien phai tra
	do{
		printf("\nNhap gio bat dau: ");
		scanf("%d", &bd);
		printf("Nhap gio ket thuc: ");
		scanf("%d", &kt);
		if(bd<12 || kt >23){
			printf("\nGio khong hop le, nhap lai tu 12h-23h!");
		}
	}while(bd<12 || kt >23);
	int time = kt-bd;
	printf("So gio da su dung la: %d.", time);
	if(time<=3){
		pay = 150000*time;
	}else{
		giam30 = (time-3)*150000*0.7;
		pay = 150000*3 + giam30;
	}
	if(bd>=14 && bd<=17){
		pay*=0.9;
	}
	printf("\nSo tien phai tra la: %.0f VND.",pay);
}
// 4
void chucNang4(){
	float soDien, tien;
    float b1=1.678,b2=1.734,b3=2.014,b4=2.536,b5=2.834,b6=2.927;
    printf("\nNhap so dien (kWh): ");
	scanf("%f",&soDien);
    if(soDien<=50){
        tien=soDien*b1;
    }else if(soDien<=100){
        tien=50*b1+(soDien-50)*b2;
    }else if(soDien<=200){
        tien=50*b1+50*b2+(soDien-100)*b3;
    }else if(soDien<=300){
        tien=50*b1+50*b2+100*b3+(soDien-200)*b4;
    }else if(soDien<=400){
        tien=50*b1+50*b2+100*b3+100*b4+(soDien-300)*b5;
    }else{
        tien=50*b1+50*b2+100*b3+100*b4+100*b5+(soDien-400)*b6;
    }
    printf("\nSo tien can phai tra la: %.3f VND.",tien);
}
// 5
void chucNang5(){
#define MAX 9
    int menhGia[MAX] = {500000,200000,100000,50000,20000,10000,5000,2000,1000};
    int soTien,soLuong;
    printf("\nNhap so tien can doi: ");
	scanf("%d",&soTien);
    for(int i=0; i<MAX; i++){
        soLuong = soTien/menhGia[i];
        soTien = soTien%menhGia[i];
        printf("\nCo %d to tien %d dong",soLuong,menhGia[i]);
    }
}
// 6
void chucNang6(){
	int kyHan = 12;
    float soTien, laiSuat=0.05 ,tong;
    printf("\nBan muon vay bao nhieu: ");
	scanf("%f",&soTien);
    float gocPhaiTra = soTien/kyHan; // $Goc tra hang thang
    printf("\nSo tien can tra hang thang: ");
    printf("\nKy han\tLai phai tra\tGoc phai tra\tTien phai tra\tGoc con lai");
    for(int i=1;i<=kyHan;i++){
        float laiPhaiTra = soTien * laiSuat; // $Lai tra hang thang
        float tienPhaiTra = laiPhaiTra + gocPhaiTra; // $ tra hang thang
        tong += tienPhaiTra;
        soTien -= gocPhaiTra;       
    	printf("\n %d\t%.0f\t\t%.0f\t\t%.0f\t\t%.0f\n",i,laiPhaiTra,gocPhaiTra,tienPhaiTra,soTien);
	}
    printf("\nTong tien phai tra sau 12 thang la: %.0f VND",tong);
}
// 7
void chucNang7(){
	float phanTramVay;
	printf("\nNhap phan tram vay (0 -> 1): ");
	scanf("%f", &phanTramVay);
	float phanTramTraTruoc = 1.0 - phanTramVay;
	
	double soTien = 500000000;
	double laiSuat = 0.072/12; // 7,2% / 1 nam
	double kyHan = 228; // ky han 24 nam 24*12
	double tienTraTruoc = soTien * phanTramTraTruoc;
	
	soTien -= tienTraTruoc; // so tien phai tra
	printf("\nSO TIEN VAY: %.0lf VND", soTien);
	double gocHangThang = soTien/kyHan;
	double tong=0;
	
	printf("\nSO TIEN TRA TRUOC: %.0lf VND\n", tienTraTruoc);
	printf("\n-----SO TIEN PHAI TRA HANG THANG-----:");
	printf("\nKy han \tLai hang thang \tGoc hang thang \tSo tien hang thang\tSo tien con lai");
	for( int i=1; i<=kyHan; i++){
		double traLai = soTien*laiSuat;
		double tienHangThang = traLai + gocHangThang;
		tong += tienHangThang;
		soTien -= gocHangThang;
		printf("\n  %d\t%.0lf\t\t%.0lf\t\t%.0lf\t\t\t%.0lf\n",i,traLai,gocHangThang,tienHangThang,soTien);
	}
	printf("TONG TIEN PHAI TRA TRONG 24 NAM (da tra truoc %.1f): %0.lf VND",phanTramTraTruoc, tong);
}
// 8
struct SinhVien{
	char ten[50];
	float diem;
};
void chucNang8(){
	int n;
	float temp;
	char name[50];
	printf("\nNhap vao so sinh vien can sap xep: ");
	scanf("%d", &n);
	struct SinhVien sv[n];
	for( int i=0; i<n; i++){
		printf("\n---NHAP THONG TIN SV %d!", i+1);
		printf("\nNhap ten SV: ");
        fflush(stdin);
		gets(sv[i].ten);
		printf("Nhap diem TB cua SV: ");
		scanf("%f", &sv[i].diem);			
	}
	for( int i=0; i<n; i++){
		for( int j=0; j<n; j++){
			if(sv[i].diem>sv[j].diem){
				temp= sv[i].diem;
				sv[i].diem = sv[j].diem;
				sv[j].diem = temp;
                strcpy(name, sv[i].ten);	// coppy name
                strcpy(sv[i].ten, sv[j].ten);
                strcpy(sv[j].ten, name);
			}
		}
	}
	printf("\n---DANH SACH SINH VIEN SAP XEP THEO THU TU DIEM GIAM DAN!");	
	for( int i=0; i<n; i++){
		printf("\n");
		printf("SST: %d)", i+1);
		printf("\nTen SV: %s.", sv[i].ten);
		printf("\nDiem TB cua SV: %.1f", sv[i].diem);
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
//9
void chucNang9(){
    int i, so1, so2, count=0;
    int kq, ketqua[2];
	printf("\n*** Moi ban chon so 1-->15!");
    printf("\nNhap so 1: ");
	scanf("%d", &so1);
	printf("Nhap so 2: ");
	scanf("%d", &so2);
	srand(time(0)); // sinh so ngau nhien sau moi lan chay
	for( i=0; i<2; i++){
		kq = rand() % 15 +1;
		ketqua[i] = kq;
	}
	for( i=0; i<2; i++){
		if( so1== ketqua[i] ){
			count++;
		}
		if( so2== ketqua[i] ){
			count++;
		}
	}
	printf("\n*** Ket qua FPOLY-LOTT!");
	printf("\nQuay so .....");
	printf("\nSo 1: %d", ketqua[0]);
	printf("\nSo 2: %d", ketqua[1]);
	if(count==2){
		printf("\nChuc mung ban da trung giai Nhat!");
	}else if(count==1){
		printf("\nChuc mung ban da trung giai Nhi!");
	}else{
		printf("\nCHUC BAN MAY MAN LAN SAU!");
	}
}
// 10
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
void chucNang10(){
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
int main(){
	printf("Chao mung den voi Assignment Nhap mon Lap Trinh.");
	int chonSo, luaChon=0;
	while(!luaChon){
	printf("\n+-----------------------------------------------+");
	printf("\n|1. Kiem tra so Nguyen, Nguyen To, Chinh Phuong.|");
	printf("\n|2. Tim UCLN, BCNN cua 2 so.\t\t\t|");
	printf("\n|3. Tinh tien cho quan Karaoke.\t\t\t|");
	printf("\n|4. Tinh tien Dien.\t\t\t\t|");
	printf("\n|5. Chuc nang doi tien.\t\t\t\t|");
	printf("\n|6. Tinh lai suat vay ngan hang tra gop.\t|");
	printf("\n|7. Vay tien mua xe.\t\t\t\t|");
	printf("\n|8. Sap xep thong tin sinh vien.\t\t|");
	printf("\n|9. Game FPT-Lott.\t\t\t\t|");
	printf("\n|10. Lam viec voi phan so.\t\t\t|");
	printf("\n|11. Thoat khoi chuong trinh.\t\t\t|");
	printf("\n+-----------------------------------------------+");
	printf("\nXin moi chon chuc nang: ");
	scanf("%d", &chonSo);
	switch(chonSo){
		case 1:	
			printf("Ban da chon chuc nang 1: Kiem tra so nguyen!");
			chucNang1();
			break;
		case 2:	
			printf("\nBan da chon chuc nang 2: Tim UCLN, BCNN cua 2 so!");
			chucNang2();
			break;
		case 3:	
			printf("\nBan da chon chuc nang 3: Tinh tien cho quan Karaoke!");
			chucNang3();
			break;
		case 4:	
			printf("\nBan da chon chuc nang 4: Tinh tien Dien!");
			chucNang4();
			break;
		case 5:	
			printf("\nBan da chon chuc nang 5: Chuc nang doi tien!");
			chucNang5();
			break;
		case 6:	
			printf("\nBan da chon chuc nang 6: Tinh lai suat vay ngan hang tra gop!");
			chucNang6();
			break;
		case 7:	
			printf("\nBan da chon chuc nang 7: Vay tien mua xe!");
			chucNang7();
			break;
		case 8:	
			printf("\nBan da chon chuc nang 8: Sap xep thong tin sinh vien!");
			chucNang8();
			break;
		
		case 9:	
			printf("\nBan da chon chuc nang 9: Game FPT-Lott!");
			chucNang9();
			break;
		
		case 10:	
			printf("\nBan da chon chuc nang 10: Lam viec voi phan so!");
			chucNang10();
			break;
		case 11:	
			printf("\nThoat chuong trinh, tam biet!");
			return 0;
		default:
			printf("\nPhim khong hop le, vui long nhap lai!\n");
		}
	}
}
