#include <stdio.h>
/// <summary>
/// Khai báo mảng có kích thước và không khởi tạo giá trị ban đầu
/// </summary>
/// <returns></returns>
int main()
{
	// 1 Cách dùng
	// <kiểu dữ liệu> <arr + Tên mảng> [<kích thước mảng>];
	int arrNumber[100];
	//Ở trên gọi là khai báo 1 mảng số nguyên có kích thước mảng là 100 phần tử

	// 2. Gán giá trị cho phần tử trong mảng cần biết vị trí cần gán
	// <tên mảng>[<vị trí cần gán>] = giá trị;
	arrNumber[0] = 5;

	//1 Chương trình cho nhập 5 số sau đó in cả 5 số ra màn hình
	// Bước 1: Khai báo 1 mảng
	int arrSo[5];
	int input = 0;
	// Bước 2: Đổ dữ liệu vào mảng
	printf("Chuong Trinh Nhap 5 So Vao \n");
	for (int i = 0; i < 5; i++)
	{
		printf("Moi ban nhap so thu %d :", i);
		scanf_s("%d", &input);
		//Thêm giá trị vào mảng dựa vào vị trí index
		arrSo[i] = input;
	}
	//Bước 3: Sau khi lấy giá trị xong thì in ra màn hình
	for (int i = 0; i < 5; i++)
	{
		printf("So thu %d ban vua nhap vao la: %d \n", i, arrSo[i]);//lấy giá trị ra khỏi mảng dựa vào index
	}

	/*
	 * Bài tập cho phép người dùng nhập số lượng số mà người dùng muốn.
	 * Sau đó nhập các số đó theo số lượng người dùng cần.
	 * In ra màn hình tất cả các số đó
	 * 2 bạn làm nhanh nhất đến cuối giờ.	
	 */
}
