#include <stdio.h>
/// <summary>
/// Câu lệnh điều kiện If Else  NẾU THÌ
/*
 * if(true){
 * Khi if true thì sẽ chạy vào trong và thực hiện 1 câu lệnh nào đó
 * 
 * }ele{
 * Khi mệnh đề if False thì sẽ vào else
 * }
 * 
 */
/// </summary>
/// <returns></returns>
int main()
{
	//Điều kiện để qua môn C cần phải Thực hành >=5 Diểm tổng kết >=5
	float diemThucHanh = 4;
	float diemTongKet = 5;
	//Gõ if + tab
	if (diemThucHanh >= 5 && diemTongKet >= 5)
	{
		printf("Chuc mung ban da qua mon LAP TRINH C");
	}else
	{
		printf("Chuc mung ban da hoc lai LAP TRINH C");
	}
	/*Bài tập: Viết 1 chương trình cho phép người dùng nhập vào
	 * 3 đầu điểm của môn C
	 * 1. Điểm thực hành phải lớn hơn hoặc bằng 5
	 * 2. Điểm tổng kết phải lớn hơn hoặc bằng 5 
	 * 3. Điểm online phảim lớn hơn 7.5
	 * Khi thỏa mãn thì sẽ báo qua môn còn không thì báo mất 600k
	 * Sử dụng scanf để nhập dữ liệu từ bàn phím vào
	 */

	return 0;
}