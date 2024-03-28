#include<stdio.h>
int main()
{
	printf("\nTra loi cau hoi trac nghiem sau: \n");
	printf("\nCau 1: Khoi nghia Hai Ba Trung dien ra nam bao nhieu?");
	printf("\n\tA. Nam 938\n\tB. Nam 40-43 SCN\n\tC. Nam 18-20 SCN\n\tD. Nam 179 TCN\n");
	printf("\nDap an cua ban la: ");
	
	char luaChon;
	luaChon = getchar();
	switch(luaChon){
		case 'c':
		case 'C':
			printf("\n--------------------\n");
			printf("\nDap an chinh xac!\n");
			break;
					
		case 'A':
		case 'a':
		case 'B':
		case 'b':
		case 'd':
		case 'D':
			printf("\n--------------------\n");
			printf("\nBan lua chon sai roi!\n");
			break;
		default:
			printf("\n--------------------\n");
			printf("\nLua chon dap an sai, vui long nhap trong 4 Dap An A, B, C, D\n");
			break;
	}
}
