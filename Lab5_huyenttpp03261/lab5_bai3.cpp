#include<stdio.h>
void hoanvi(int *a, int *b){
	int mark= *a;
	*a = *b;
	*b = mark;
	printf("Sau khi hoan vi: a = %d, b = %d", *a,*b);
}
int main(){
	int a,b;
	printf("Nhap a= ");
	scanf("%d", &a);
	printf("Nhap b= ");
	scanf("%d", &b);
	hoanvi(&a,&b);
}
