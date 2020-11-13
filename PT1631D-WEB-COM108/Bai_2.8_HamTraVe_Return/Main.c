#include <stdio.h>
/// <summary>
/// HÀM TRẢ VỀ - CÓ RETURN
/// HÀM TRẢ VỀ KHÔNG CÓ THAM SỐ VÀ CÓ THAM SỐ
/// Trả về 1 giá trị hoặc 1 tập giá trị.
/// </summary>
/// <returns></returns>

// Hàm trả về không tham số
// <Kiểu dữ liệu> <tên hàm>(){
//     Body Code
//     return <giá trị đúng với kiểu dữ liệu của hàm>
//}

int getYear()
{
	printf("Day la ham Tra ve");
	return 2020;//Vì hàm là có kiểu số nguyên nên phải trả về đúng kiểu
	//return phải đặt ở cuối hàm
}

float diemC()
{
	float a = 5.9;
	return a;//Miễn là return đúng kiểu dữ liệu của hàm
}

int main()
{	
	//Có thể thực hiện tính toán đối với những hàm trả về kiểu số
	getYear();//Khi gọi hàm trả về thì nó không thể tự in ra màn hình vì nó là 1 giá trị hoặc tập giá trị
	printf("%d", getYear() + 1);//Hãy coi hàm trả về như 1 biến được tạo ra và nó chưa giá trị bên trong
	
}