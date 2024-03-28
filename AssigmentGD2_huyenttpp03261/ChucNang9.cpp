#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int i, so1, so2, count=0;
    int kq, ketqua[2];
	printf("Moi ban chon so 1-->15!");
    printf("Nhap so 1: ");
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
	printf("\nKet qua FPOLY-LOTT hom nay!");
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
