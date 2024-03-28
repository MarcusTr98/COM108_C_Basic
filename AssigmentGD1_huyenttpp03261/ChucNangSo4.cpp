#include <stdio.h>
int main()
{
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
