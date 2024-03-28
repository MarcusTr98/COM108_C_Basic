#include<stdio.h>
#include<math.h>

int main(){
	float a;
	printf("Moi nhap so de kiem tra: ");
	scanf("%f", &a);

	if (a == (int)a) {
		printf("%.2f la so Nguyen.\n", a);
	}else{
		printf("%.2f ko phai la so Nguyen.\n", a);
	}
	
	if ( a>1 && a==(int)a ){
		int mark =0;
		for( int i=2; i <= a-1 ; i++){
			if( (int)a % i ==0 ){
				mark=1;
				break;
			}
		}
		if(mark==0){
			printf("%.2f la so nguyen to.\n", a);
		}else if(mark==1)
			printf("%.2f khong phai la so Nguyen To.\n", a);
		
	}else
		printf("%.2f khong phai la so Nguyen To.\n", a);
		
	if ( a>1 && a==(int)a && sqrt(a)==(int)sqrt(a) ){
		printf("%.2f la so Chinh Phuong.\n", a);
	}else
		printf("%.2f khong phai la so Chinh Phuong.\n", a);
}
