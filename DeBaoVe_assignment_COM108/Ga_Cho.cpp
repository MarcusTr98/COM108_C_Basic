#include<stdio.h>
int main(){
	int ga, cho;
	for( ga =0; ga <=36; ga++){
		for (cho =0; cho <=25; cho++ ){
			if( ga+cho==36 && (ga*2+cho*4)==100){
				printf("So ga la: %d", ga);
				printf("\nSo cho la: %d", cho);
			}
		}
	}
	return 0;
}
