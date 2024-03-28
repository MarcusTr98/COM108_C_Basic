#include<stdio.h>
#include<string.h>
int main(){
	char s[5][20];
	int i,j;
	printf("Nhap 5 chuoi bat ky: ");
	for(i=0; i<5; i++){
		gets(s[i]);
	}
	char temp[20];
	for( i=1; i<5; i++){
		for( j=1; j<5; j++){
			if( strcmp(s[j-1], s[j]) > 0) { // -> chuoi j-1 > chuoi j
            strcpy( temp, s[j-1]);
            strcpy( s[j-1], s[j]);
            strcpy( s[j], temp);
        	}
		}
	}
	printf("\nThu tu cua cac chuoi tang dan:");
	for( i=0; i<5; i++){
		printf("\n%s", s[i]);
	}
	return 0;
}
