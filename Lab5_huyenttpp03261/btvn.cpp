 #include<stdio.h>
void tinhTienDien(int soDien){
	int pay; // so tien phai tra
	int b1=1500, b2=2000, b3=2500, b4=3000;
	if(soDien<=50){
		pay= b1*soDien;
		printf("%d * %d = %d", b1, soDien, pay);
	}else if(soDien<=100){
		pay= b1*50+b2*(soDien-50);
		printf("%d * 50 = %d", b1, 50*b1 );
		printf("\n%d * (%d-50) = %d", b2, soDien, (soDien-50)*b2 );
	}else if(soDien<=200){
		pay=b1*50+b2*50+b3*(soDien-100);
		printf("%d * 50 = %d", b1, 50*b1 );
		printf("\n%d * 50 = %d", b2, 50*b2 );
		printf("\n%d * (%d-100) = %d", b3, soDien, (soDien-100)*b3) ;
	}else{
		pay=b1*50+b2*50+b3*100+b4*(soDien-200);
		printf("%d * 50 = %d", b1, 50*b1 );
		printf("\n%d * 50 = %d", b2, 50*b2 );
		printf("\n%d * 100 = %d", b3, 100*b3) ;
		printf("\n%d * (%d-200) = %d", b4, soDien, (soDien-200)*b4);
   	}
	printf("\nSo tien phai tra la: %d dong", pay);
}

int main(){
	int soDien;
	printf("Nhap so Dien da su dung: ");
	scanf("%d", &soDien);
	tinhTienDien(soDien);
}
