#include<stdio.h>
#include<math.h>

int main(){
	printf("Chao mung den voi Assignment mon Nhap mon Lap Trinh.");
	
	int chonSo, luaChon=0;
	while(!luaChon){
	printf("\n-----------------------------------------------");
	printf("\n1. Kiem tra so Nguyen, Nguyen To, Chinh Phuong.");
	printf("\n2. Tim UCLN, BCNN cua 2 so.");
	printf("\n3. Tinh tien cho quan Karaoke.");
	printf("\n4. Tinh tien dien.");
	printf("\n5. Chuc nang doi tien.");
	printf("\n6. Tinh lai suat vay ngan hang tra gop.");
	printf("\n7. Vay tien mua xe.");
	printf("\n8. Sap xep thong tin sinh vien.");
	printf("\n9. Game FPT-Lott.");
	printf("\n10. Lam viec voi phan so.");
	printf("\n11. Thoat khoi chuong trinh.");
	printf("\n-----------------------------------------------");
	printf("\nXin moi chon chuc nang: ");
	
	scanf("%d", &chonSo);
	switch(chonSo){
		case 1:	
		printf("Ban da chon chuc nang 1: Kiem tra so Nguyen, Nguyen To, Chinh Phuong!");
		break;
		
		case 2:	
		printf("\nBan da chon chuc nang 2: Tim UCLN, BCNN cua 2 so!");
		break;
		
		case 3:	
		printf("\nBan da chon chuc nang 3: Tinh tien cho quan Karaoke!");
		break;
		
		case 4:	
		printf("\nBan da chon chuc nang 4: Tinh tien dien!");
		break;
		
		case 5:	
		printf("\nBan da chon chuc nang 5: Chuc nang doi tien!");
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
