#include<stdio.h>
int soSanh3So( int a,int b, int c){
	int max;
	if(a>b && a>c){
		max=a;
	}else if(b>a && b>c){
		max=b;
	}else{
		max=c;
	}
	return max;
}

int main(){
	int a,b,c;
	printf("Nhap 3 so a, b, c: ");
	scanf("%d %d %d", &a,&b,&c);
	printf("So max la: %d", soSanh3So(a,b,c) );
	return 0;
}
