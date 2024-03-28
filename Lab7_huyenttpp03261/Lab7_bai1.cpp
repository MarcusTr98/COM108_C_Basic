#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	printf("Xin moi nhap vao chuoi: ");
	gets(s);
	int n=0, p=0;
	for(int i=0; i< strlen(s); i++){ 
		if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='I' || s[i]=='u' || s[i]=='U' || s[i]=='o' || s[i]=='O' ){
		n++;
		}else if( s[i]==' '){
		}
		else{
		p++;
		}
	}printf("Chuoi %s co chua: %d Nguyen Am va %d Phu Am.", s,n,p);
	return 0;
}
