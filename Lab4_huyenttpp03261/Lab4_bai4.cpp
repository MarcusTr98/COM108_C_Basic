#include<stdio.h>
int main(){
	int luaChon, a=0;
    while(!a){ 
    	printf("\n++---------------------------------------------++");
        printf("\n| 1. Tinh TB tong cac so chia het cho 2.\t|");
        printf("\n| 2. Tim so Nguyen to.\t\t\t\t|");
        printf("\n| 3. Tim so Chinh phuong.\t\t\t|");
        printf("\n| 4. Thoat chuong trinh!\t\t\t|");
        printf("\n++---------------------------------------------++");
        printf("\nMoi lua chon chuc nang (1-4): ");
        scanf("%d", &luaChon);
        
        switch(luaChon){
	        case 1: {
	        	printf("\nChao mung den voi chuc nang Tinh TB tong cac so chia het cho 2!");
				int min,max;
				printf("\nNhap min: "); scanf("%d",&min);
				printf("Nhap max: "); scanf("%d",&max);
				float tong, dem=0, TB;
    			while(min<=max){
					if(min%2==0){
						printf("\n%d",min);
      					tong += min;
      					dem++;	
					}
					min++;
				}
				printf("\nBien dem = %.0f", dem);
				TB = tong/dem;
				printf("\nTrung binh tong cua cac so tu nhien chia het cho 2 la: %.0f",TB);
	        } break;
	        
	        case 2: {
	        	printf("\nChao mung den voi chuc nang Tim so Nguyen to!");
	        	int n;
				printf("\nNhap vao so nguyen n: ");
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
	        }break;	
	        
	        case 3: {
	        	printf("\nChao mung den voi chuc nang Tim so Chinh phuong!");
				int a;
				printf("\nNhap so can tra cuu: ");
				scanf("%d", &a);
				int i, mark=0;
				for( i=1; i<a-1; i++ ){
					if(i*i == a){
						mark++;
						break;
					}
				}
				if(mark==1){
					printf("%d la so Chinh Phuong.", a);
				}else{
					printf("%d khong phai la so Chinh Phuong.", a);
				}	
	        } break;
	        
        	case 4: 
        	printf("\nThoat chuong trinh, bye bye!");
			return 0;
			
			default:
			printf("\nNhap khong hop le! Nhap lai ( 1-> 4 )");	
        }
    }
}
