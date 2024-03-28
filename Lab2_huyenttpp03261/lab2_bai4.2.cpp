#include <stdio.h>
main()
// nhap vap diem Toanx3,Lyx2,Hoax1 >> DTB
{
	float diemToan, diemLy, diemHoa;

	printf("Moi nhap vao diem Toan: ");
	scanf("%f", &diemToan);	
	if( diemToan<0 || diemToan>10 ){
		printf("Nhap lai diem Toan");
		return 0;
	}
	
	printf("Moi nhap vao diem Ly: ");
	scanf("%f", &diemLy);
	if ( diemLy<0 || diemLy>10 ){
		printf("Nhap lai diem Ly");
		return 0;
	}
		
	printf("Moi nhap vao diem Hoa: ");
	scanf("%f", &diemHoa);	
	if ( diemHoa<0 || diemHoa>10 ){
		printf("Nhap lai diem Hoa");
		return 0;
	}

	float diemTB=((diemToan*3)+(diemLy*2)+diemHoa)/6;	
	printf("\nDiem trung binh 3 mon la: %.2f", diemTB);
	
	return 0;
}
