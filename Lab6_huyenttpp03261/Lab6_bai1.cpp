#include<stdio.h>
float TBC(int a[], int n){
	float tong=0;
	float tb;
	int count =0;
	for(int i=0; i<n; i++){
		if(a[i]%3==0){
			tong+=a[i];
			count++;
		}
	}tb=tong/count;
	printf("TB tong ca so chia het cho 3 la: %.2f", tb);
	return 0;
}
int main(){
	int n;
	printf("Nhap so luong phan tu cua mang: ");
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++){
		printf("\na[%d]= ",i);
		scanf("%d", &a[i]);
	}
	TBC((a),n);
}
