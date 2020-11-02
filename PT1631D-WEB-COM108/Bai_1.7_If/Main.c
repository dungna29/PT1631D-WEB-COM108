#include <stdio.h>
/// <summary>
/// Câu điều kiện IF
/// Câu lệnh if dùng để kiểm tra 1 điều kiện nào đó và nó phải luôn đúng
/*
 * if(true){
 * //if phải đúng thì mới chạy vào bên trong
 * //Bên trong sẽ thực hiện 1 công việc nào đấy
 * }
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
	}
	
	return 0;
}