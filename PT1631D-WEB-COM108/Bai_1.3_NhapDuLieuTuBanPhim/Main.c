#include <stdio.h>
/// <summary>
/// Nhập dữ liệu từ bàn phím vào
/// </summary>
/// <returns></returns>
int main()
{
	int nam = 2020;// toán tử bằng dùng để gán giá trị
	printf("Nam Can In Ra La: %d\n", nam);
	//Nhập dữ liệu từ bàn phím sử dụng hàm scanf hoặc scanf_s(đối với visual studio)
	//Viết 1 chương trình nhập điểm môn C
	float diemMonC = 0;//Bước 1 khai báo 1 biến để chưa giá trị khi người dùng nhập vào
	printf("Moi ban nhap diem tong ket mon C: ");
	scanf_s("%f", &diemMonC);//diemMonC sẽ chứa giá trị mà người dùng nhập vào từ bàn phím
	printf("Diem C ban vua nhap vao la: %f \n", diemMonC);

	/*
	 * Bài 1: Viết 1 chương trình nhập 2 số nguyên và 
	 * in 2 số đó ra màn hình
	 * Bài 2: Viết 1 chương trình nhập 2 số thực và
	 *  in 2 số đó ra màn hình
	 */
	//Giải bài 2	
	int a = 0, b = 0;
	printf("Moi ban nhap so thu 1: \n");
	scanf_s("%d", &a);
	printf("Moi ban nhap so thu 2: \n");
	scanf_s("%d", &b);
	printf("Hai so ban vua nhap %d va %d \n", a, b);
	return 0;
}