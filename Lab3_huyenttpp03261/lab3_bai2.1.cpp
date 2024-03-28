#include <stdio.h>
int main()
// ax + b = 0;
{
	float a, b, x;
	printf("Nhap he so cua phuong trinh ax + b = 0");
	printf("\na=");
	scanf("%f", &a);
	printf("\nb=");
	scanf("%f", &b);
	if(a==0){
		if(b==0){
			printf("\nPT vo so nghiem.");
		}
		else{
		printf("\nPT vo nghiem.");
		}
	}
	else{
		x=-b/a;
		printf("\nNghiem x la %.2f", x);
	}
	return 0;
}
