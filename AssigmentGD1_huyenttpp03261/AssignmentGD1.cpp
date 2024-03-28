#include<stdio.h>
#include<math.h>
void chucNang1();
void chucNang2();
void chucNang3();
void chucNang4();
void chucNang5();

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
			break;
		
		case 7:	
			printf("\nBan da chon chuc nang 7: Vay tien mua xe!");
			break;
		
		case 8:	
			printf("\nBan da chon chuc nang 8: Sap xep thong tin sinh vien!");
			break;
		
		case 9:	
			printf("\nBan da chon chuc nang 9: Game FPT-Lott!");
			break;
		
		case 10:	
			printf("\nBan da chon chuc nang 10: Lam viec voi phan so!");
			break;
		
		case 11:	
			printf("\nThoat chuong trinh, tam biet!");
			return 0;
		
		default:
			printf("\nPhim khong hop le, vui long nhap lai!\n");
		}
	}
}
// Chuc nang
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
void chucNang3(){
	int bd, kt;
	float pay, giam30;
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

