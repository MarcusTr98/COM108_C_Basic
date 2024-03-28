#include<stdio.h>
int main(){
	int n, m;
	printf("Nhap vao n cot va m hang: ");
	scanf("%d%d", &n,&m);
	int a[n][m];
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			printf("a[%d][%d]= ", i,j);
			scanf("%d", &a[i][j]);
		}
	}
	int tong=0;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(a[i][j]%2==0){
				tong+=a[i][j];
			}
		}
	}printf("\nTong cac so chan la: %d", tong);
}
