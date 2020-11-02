#include <stdio.h>
/// <summary>
/// Toán tử số học trong lập trình 
///	+ - * / (cộng,trừ,nhân,chia) ++(tăng số lên 1 đơn vị) --(giảm 1 đơn vị) %(chia lấy phần dư)
/// </summary>
/// <returns></returns>
int main()
{
	int a = 9, b = 8, c = 0;//Dùng c để lưu trữ kết quả
	//Phép toán cộng trừ nhân chia
	c = a + b;
	printf("%d + %d = %d \n", a, b, c);//Cách viết 1
	printf("%d + %d = %d \n", a, b, a + b);//Cách viết 2
	a++;//Tăng 1 đơn vị 9 tăng lên 10
	b--;//Giảm 1 đơn vị 8 giảm xuống 7
	printf("%d + %d = %d \n", a, b, a + b);
	//Chia lấy phần dư
	printf("Chia lay phan du 8 phan tram 2 = %d \n", 8 % 2);
	printf("Chia lay phan du 8 phan tram 3 = %d \n", 8 % 3);
	/*
	 * Viết 1 chương trình cho người dùng nhập vào 3 số thực
	 * Sau đó in ra 4 phép toán cộng trừ nhân chia của 3 số đó
	 * In ra màn hình các số đã nhập vào và kết quả*
	 *
	 */
	return 0;
}