#include <stdio.h>
#include <math.h>
int main()
{
	float a, b, c, delta;
	printf("Giai PT bac 2: ax^2 + bx + c = 0\n");
	printf("\nMoi nhap vao he so a: ");
	scanf("%f", &a);
	printf("\nMoi nhap vao he so b: " );
	scanf("%f", &b);
	printf("\nMoi nhap vap he so c: ");
	scanf("%f", &c);
		
	if(a==0){ // thanh PT bac 1
		if(b==0){
			if(c==0){
				printf("\nPT vo so nghiem.");
			}
			else{
				printf("\nPT vo nghiem.");
			}
		}
		else{
			printf("\nPT co 1 nghiem x = %.2f", -c/b);
		}
	}
	else{
		float x, x1, x2;
		delta = pow(b,2)-4*a*c;
		if(delta>0){
			x1= (-b-sqrt(delta))/2*a;
			x2= (-b+sqrt(delta))/2*a;
			printf("\nPT co 2 nghiem phan biet x1 = %.2f, x2 = %.2f.", x1,x2);
		}
		else if (delta==0){
			x = -b/(2*a);
			printf("\nPT co nghiem kep x1 = x2 = %.2f.", x);
		}
		else{
			printf("\nPT vo nghiem.");
		}
	}
	return 0;	
}
