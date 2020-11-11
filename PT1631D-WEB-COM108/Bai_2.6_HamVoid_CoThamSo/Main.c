#include <stdio.h>
/*
 * VÍ DỤ 2: HÀM KHÔNG TRẢ VỀ CÓ THAM SỐ TRUYỀN VÀO
 * void là kiểu hàm
 * void [tên hàm](<tham số>){
 *	Thân hàm để thực hiện 1 hành động nào đó
 * }
 * Nguyên tắc đặt tên hàm: <động từ đứng trước> + <Tên hàm đấy>
 */


//Chức năng của hàm này dùng để tính tổng 2 số
void tinhTong(int thamso1,int thamso2)//(int thamso1,int thamso2) được gọi là tham số truyền và - một hàm có thể có 0 hoặc nhiều tham số
{//Tham số ở đây chính là khai báo ra các biến có kiểu dữ liệu và có tên
	printf("%d + %d = %d", thamso1, thamso2, thamso1 + thamso2);
}

// THAM SỐ CÓ THỂ LÀ CÁC KIỂU DỮ LIỆU KHÁC NHAU
void xepHang(int msv, float diem, char c, long number)//Tham số nhiều hay ít phụ vào bài toán
{
	//Thực hiện 1 hành động nào đó
}


int main()
{
	int a = 5, b = 10;
	//printf("%d + %d = %d", a, b, a + b);
	//Khi gọi hàm có tham số thì luôn nhớ phải:
	/*
	 * 1. Truyền đủ tham số ví dụ: có 2 tham số thì phải truyền đúng 2 tham số
	 * 2. Truyền đúng kiểu dữ liệu	 * 
	 */
	//tinhTong(); Sẽ báo đỏ vì đây là có truyền tham số
	tinhTong(a, b);
}