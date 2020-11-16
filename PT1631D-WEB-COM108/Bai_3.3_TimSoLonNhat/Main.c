#include <stdio.h>
/// <summary>
/// Tìm số lớn nhất trong mảng
/// </summary>
/// <returns></returns>
int main()
{
	int arrNumber[] = { 1,99,88,77,15,56,100 };
	//Lấy giá trị tại vị trí đầu tiên coi như là số lớn nhất
	int max = arrNumber[0];//Khai báo biến chứa số lớn nhất
	for (int i = 1; i < 7; i++)
	{
		if (max < arrNumber[i])//Mang biến max đi so sánh với tất cả các số còn lại
		{
			max = arrNumber[i];//Nếu biến max nhỏ hơn số còn lại thì đảo vị trí
		}
	}
	printf("So lon nhat o tren là: %d", max);

	/*
	 * Buổi sau kiểm tra LAB 1 trong 2 bài sau:
	 * 1 - In tất cả các bảng cửu chương
	 * 2 - Thuật toán sắp xếp nổi bọt với 1 mảng
	 * Code trong 15 phút.
	 * 
	 * Bài tập viết 1 chương trình Switch Case
	 * 1. Cho phép nhập 1 dãy số do người dùng chọn
	 * nguyên sau đó khi in ra màn hình cộng 1 cho 
	 * tất cả các số ở vị trí lẻ (Hỏi người dùng nhập vào bao số)
	 * 2. Cho phép nhập các đầu điểm để quan môn C sau đó tính điểm
	 * trung bình.
	 * 
	 * Sử dụng hàm trả về hoặc không trả về sẽ được 1 điểm để lên 10.
	 * CleanCode: 1 điểm
	 * 
	 */
}
