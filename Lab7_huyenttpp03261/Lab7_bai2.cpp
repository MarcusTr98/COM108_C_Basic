#include<stdio.h>
#include<string.h>
#define USERNAME "admin"
#define PASSWORD "123@abc"
int main(){
	//const char USERNAME[30] = "admin";
	//const char PASSWORD[30] = "123@abc";
	char name[30];
	char pass[30];
	printf("Xin moi nhap vao Username: ");
	fgets(name, sizeof(name), stdin);
	printf("Xin moi nhap vao Password: ");
	fgets(pass, sizeof(pass), stdin);
	
	name[strcspn(name, "\n")] = '\0';
    pass[strcspn(pass, "\n")] = '\0';

	// if(name[20] == username[20] && pass[20] == password[20])
	if( strcmp(USERNAME, name) == 0 && strcmp (PASSWORD, pass) == 0 ){
		printf("Dang nhap thanh cong!");
	}else{
		printf("Dang nhap that bai!");
	}
	
    return 0;
}
