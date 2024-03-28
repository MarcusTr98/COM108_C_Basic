#include <stdio.h>
int main(){
    int min,max;
	printf("Nhap min: ");
	scanf("%d",&min);
	printf("Nhap max: ");
	scanf("%d",&max);
	
	float tong, dem=0, TB;
	// int i=min;
    while(min<=max){
		if(min%2==0){
			printf("\n%d",min);
      		tong += min;
      		dem++;	
		}
		min++;
	}
	printf("\nBien dem = %.0f", dem);
	TB = tong/dem;
	printf("\nTrung binh tong cua cac so tu nhien chia het cho 2 la: %.0f",TB);
	return 0;
}
