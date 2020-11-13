#include <stdio.h>
/// <summary>
/// MẢNG - Array
/// Mảng luôn bị cố định bởi kích thước
/// </summary>
/// <returns></returns>
int main()
{
	// 1. Đặt vấn đề:
	// Khởi tạo 1 biến có kiểu dữ liệu số nguyên có khởi tạo giá trị ban đầu
	int a = 99;
	// Biến chỉ có thể lưu trữ được 1 giá trị
	// Muốn lưu trữ nhiều giá trị thì làm thế nào???
	// 2. Giải pháp ở đây là Mảng:
	// Công thức: <Kiểu dữ liệu> <tên mảng arr> = {<giá trị 1>,<giá trị 2>...};
	int arrNumber[] = { 8,9,7,6,5 };//Khai báo 1 mảng có kiểu dữ liệu là số nguyên và có khởi tạo các giá trị ban đầu

	// 3. Lấy giá trị trong mảng cần biết INDEX 
	// - MẢNG LUÔN BẮT ĐẦU TỪ INDEX = 0
	// - công thức lấy:  <Tên mảng>[<index>]
	//printf("%d", arrNumber[2]);

	// 4. In ra nhiều phần tử cùng 1 lúc
	// Cách 1: Sử dụng vòng lặp để in ra màn hình tất cả các phần tử trong mảng
	// Tăng index lên theo tuần tự
	for (int i = 0; i < 5; i++)
	{
		printf("%d \n", arrNumber[i]);
	}
	//Bài tập: Khai báo 1 mảng điểm có 10 đầu điểm sau đó dùng vòng lặp 
	// in tất cả điểm của mảng đó ra màn hình - Dùng vòng for, while
	printf("---------------------- \n");
	// Dùng While bài cũ
	int temp = 0;
	while (temp < 5)
	{
		printf("%d \n", arrNumber[temp]);
		temp++;
	}

}