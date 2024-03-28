#include <stdio.h>
main()
// nhap vap diem Toanx3,Lyx2,Hoax1 >> DTB
{
	float diemToan, diemLy, diemHoa;
		
	printf("Moi nhap vao diem Toan, Ly, Hoa: ");
	scanf("%f %f %f", &diemToan,&diemLy, &diemHoa );
	
	if( diemToan<0 || diemToan>10 || diemLy<0 || diemLy>10 || diemHoa<0 || diemHoa>10){
		printf("Nhap lai diem Toan, Ly, Hoa.");
	}
	
	else{
		float diemTB=((diemToan*3)+(diemLy*2)+diemHoa)/6;	
		printf("\nDiem trung binh 3 mon la: %.2f", diemTB);
	}
	return 0;
}
