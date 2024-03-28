#include<stdio.h>
// #define MAX 9
int main(){
    int menhGia[] = {500000,200000,100000,50000,20000,10000,5000,2000,1000};
	int soLuong(sizeof(menhGia)/sizeof(menhGia[0]));
    
    int soTien;
    printf("\nNhap so tien can doi: ");
	scanf("%d",&soTien);
	
    for(int i=0; i<=8; i++){
        soLuong = soTien/menhGia[i];
        soTien %= menhGia[i];
        printf("\nCo %d to tien %d dong",soLuong,menhGia[i]);
    }
}
