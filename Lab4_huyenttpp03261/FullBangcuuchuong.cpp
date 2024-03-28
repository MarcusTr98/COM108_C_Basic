#include<stdio.h>

int main(){
	printf("Bang cuu chuong: \n");
	printf("\n");
	int i,j;
	for(i=1; i<=10; i++){
		for(j=1; j<=10; j++){
			printf("%d x %d = %d\t", j,i, i*j);
		}
		printf("\n");
	}
	return 0;
}
