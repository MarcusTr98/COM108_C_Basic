#include<stdio.h>
#include<string.h>
int main(){
	char name[20];
	char pass[20];
	const char USERNAME[20] = "admin";
	const char PASSWORD[20] = "123abc";	
	printf("Xin moi nhap vao Username: ");
	gets(name);
	printf("Xin moi nhap vao PassWord: ");
	gets(pass);	
	if( strcmp(USERNAME, name)==0 && strcmp(PASSWORD, pass)==0 ){
		printf("Dang nhap thanh cong!");
	}else{
		printf("Dang nhap that bai!");
	}
	return 0;
}
