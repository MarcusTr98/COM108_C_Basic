#include<stdio.h>
int main(){
	int m,n;
	printf("Nhap vao m va n: ");
	scanf("%d%d", &m, &n);

	int x[m][n];
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("x[%d][%d]= ", i,j);
			scanf("%d", &x[i][j]);
		}
	}
	printf("\nMang binh phuong:\n");
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			x[i][j]=x[i][j]*x[i][j];
			printf("%d ", x[i][j]);
		}
		printf("\n");
	}return 0;
}
