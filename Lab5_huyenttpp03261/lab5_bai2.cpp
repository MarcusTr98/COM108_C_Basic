#include<stdio.h>
int kiemtra(int nam){
	if(nam%400==0 || (nam%4==0)&&(nam%100!=0)){
		return 1;
	}else{
		return 0;
	}
}
int main(){
 	int nam;
 	printf("Nhap nam can tra cuu: ");
 	scanf("%d", &nam);

 	if( kiemtra(nam) ){	
 		printf("\nNam %d la nam nhuan.",nam);
	}else
 		printf("\nNam %d la nam ko nhuan.", nam);
 	return 0;
 }
