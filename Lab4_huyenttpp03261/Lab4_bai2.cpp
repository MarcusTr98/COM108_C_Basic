#include<stdio.h>

int main()
{
	int n;
	printf("Nhap vao so nguyen n: ");
	scanf("%d", &n);
	if(n<2){
		printf("%d khong phai la so nguyen to.", n);
	}else{
		int i, mark=0;
		
		for ( i=2; i<n; i++){
			if(n%i==0){ // ko phai so ntod
				mark+=1;
				break;
			}
		}
		if(mark == 0){
			printf("%d la so nguyen to.", n);
		}else{
				printf("%d khong phai la so nguyen to.", n);
		}	
	}	
	return 0;
	
}
