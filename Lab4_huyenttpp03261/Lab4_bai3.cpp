#include<stdio.h>
#include<math.h>
int main (){
	int a;
	printf("Nhap so can tra cuu: ");
	scanf("%d", &a);
	
	/*if ( a>1 && sqrt(a)==(int)sqrt(a) ){
		printf("%d la so Chinh Phuong.\n", a);
	}else
		printf("%d khong phai la so Chinh Phuong.\n", a); */
		
	int i, mark=0;
	for( i=1; i<a-1; i++ ){
		if(i*i == a){
			mark++;
			break;
		}
	}
	if(mark==1){
		printf("%d la so Chinh Phuong.", a);
	}else{
		printf("%d khong phai la so Chinh Phuong.", a);
	}
}

