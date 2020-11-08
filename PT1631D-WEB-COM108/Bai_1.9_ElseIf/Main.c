#include <stdio.h>
/// <summary>
/// Câu lệnh rẽ nhánh Else If
/// Dùng khi có nhiều trường hợp xảy ra
/// </summary>
/// <returns></returns>
int main()
{
	/*
	 * Học lực chia làm nhiều kết quả
	 * Điểm TK < 3 thì nên bỏ ngành
	 * Điểm TK >3 <5 thì nên mất 600K
	 * Điểm TK >5 <7 thì KHÁ
	 * Điểm TK >7 <8 thì Giỏi
	 * Diểm TK >9 <10 thì Quá Giỏi
	 */
	float diemC = 5;
	//Cách 1
	if (diemC >= 9)
	{
		printf("SIEU NHAN");
	}
	else if (diemC >= 7)
	{
		printf("Gioi");
	}
	else if (diemC >= 5)
	{
		printf("Kha");
	}
	else if (diemC >= 3)
	{
		printf("Mat 600");
	}
	else
	{
		printf("Doi nganh");
	}
}