#include<stdio.h>
void hoanvi(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}
void sapXepTang(int x[], int n){
	for(int i=0; i<n-1; i++){
		int vitrinhonhat = i;
		for(int j=i+1; j<n; j++){
			if(x[j] < x[vitrinhonhat]){
				vitrinhonhat = j;
			}
		}
		hoanvi(x[i], x[vitrinhonhat]);
	}
}
void sapXepGiam(int x[], int n){
	for(int i=0; i<n-1; i++){
		int vitrilonnhat = i;
		for(int j=i+1; j<n; j++){
			if(x[j] > x[vitrilonnhat]){
				vitrilonnhat = j;
			}
		}
		hoanvi(x[i], x[vitrilonnhat]);
	}
}
void xuatMang(int x[], int n){
	for(int i=0; i<n; i++){
		printf("%d ", x[i]);
	}
}
int main(){
	int n;
	printf("Nhap so luong phan tu trong mang: ");
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++){
		printf("a[%d]= ", i);
		scanf("%d", &a[i]);
	}
	printf("\nMang tang dan: ");
	sapXepTang(a,n);
	xuatMang(a,n);
	printf("\nMang giam dan: ");
	sapXepGiam(a,n);
	xuatMang(a,n);
}
