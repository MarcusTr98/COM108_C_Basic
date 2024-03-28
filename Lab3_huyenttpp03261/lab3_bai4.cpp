#include<stdio.h>
int main(){
	printf("Menu chuong trinh Lab-03.");
	printf("\n---------------------------------");
	printf("\n1. Tinh hoc luc sinh vien.");
	printf("\n2. Giai Phuong trinh bac nhat.");
	printf("\n3. Giai Phuong trinh bac hai.");
	printf("\n4. Tinh tien dien.");
	printf("\n5. Thoat chuong trinh.");
	printf("\n---------------------------------");
	printf("\nXin moi chon chuc nang: ");
	
	TIEPTUC:
	int a;
	scanf("%d", &a);
	switch(a){

	case 1:
		printf("\nChao mung den voi chuc nang: Tinh hoc luc sinh vien.");
		break;
	case 2:
		printf("\nChao mung den voi chuc nang: Giai Phuong trinh bac nhat.");
		break;
	case 3:
		printf("\nChao mung den voi chuc nang: Giai Phuong trinh bac hai.");
		break;
	case 4:
		printf("\nChao mung den voi chuc nang: Tinh tien dien.");
		break;
	case 5:
		printf("\nThoat chuong trinh, tam biet.");
		break;
	default:
		printf("Lua chon khong hop le, chon lai chuc nang 1, 2, 3, 4, 5: ");
		goto TIEPTUC;
	}		
}
