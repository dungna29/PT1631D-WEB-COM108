#include <stdio.h>
/// <summary>
/// Hàm trả về có tham số
/// </summary>
/// <returns></returns>

// Hàm trả về có tham số
// <Kiểu dữ liệu> <tên hàm>(<tham số>){
//     Body Code
//     return <giá trị đúng với kiểu dữ liệu của hàm>
//}
int tinhTongHaiSo(int a, int b)
{
	int c = a + b;
	return c;
}
int tinhTongHaiSo2(int so1, int so2)//Không bị giới hạn tham số mà nó phụ thuộc vào bài toán
{
	return so1 + so1;//Đây là cách viết nhanh
	//Miễn các bạn trả về đúng kiểu dữ liệu của hàm
}
//KIỂU DỮ LIỆU CỦA HÀM CHÍNH LÀ NHỮNG GÌ CÁC BẠN ĐƯỢC HỌC KIỂU DỮ LIỆU CỦA BIẾN
//NGOÀI RA CÓ THỂ RETURN CẢ TẬP GIÁ TRỊ
int main()
{
	int d = 0, e = 0;
	printf("Chuong Trinh Cong 2 So: \n");
	printf("Moi ban nhap so thu 1: ");
	scanf_s("%d", &d);
	printf("Moi ban nhap so thu 2: ");
	scanf_s("%d", &e);
	printf("%d + %d = %d", d, e,tinhTongHaiSo(d,e));
	//Khi có hàm trả về các bạn có thể cộng trừ nhân chia nó nếu nó là số 
}