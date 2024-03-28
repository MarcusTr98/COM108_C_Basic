#include<stdio.h>
int main()
// tim uoc so chung lon nhat
{
	int a,b, UCLN, BCNN;
	do{
		printf("Moi nhap vao so nguyen a: ");
		scanf("%d", &a);
		printf("Moi nhap vao so nguyen b: ");
		scanf("%d", &b);
		if(a<0 || b<0){
			printf("Khong hop le! Nhap lai: a,b >= 0.\n");
		}
	}while(a<0 || b<0);
	
	if (a>=0 && b>=0){
		if(a==0 && b==0){
			printf("Khong ton tai UCLN va BCNN!\n");
		}else if( a==0 || b==0){
			printf("Khong ton tai BCNN, UCLN la %d.\n", (a==0)?b:a);
		}else{
			int bc = a*b; //tinh tich cua boichung
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
	return 0;
}
