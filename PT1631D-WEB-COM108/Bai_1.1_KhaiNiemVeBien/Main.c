#include <stdio.h>
/// <summary>
/// BÀI 1. KHÁI NIỆM VỀ BIẾN TRONG LẬP TRÌNH
/// Định nghĩa: Biến dùng để lưu trữ 1 giá trị hoặc tập giá trị
/// và giá trị đó sẽ được định kiểu được gọi là 
/// kiểu dữ liệu
/// </summary>
/// <returns></returns>

//BIẾN TOÀN CỤC SẼ ĐƯỢC KHAI BÁO Ở BÊN NGOÀI CỦA HÀM
// NÊN SỬ DỤNG DẤU GẠCH DƯỚI VỚI BIẾN TOÀN CỤC
double _diemC, _diemJava1, _diemHTML;//Khai báo nhiều biến toàn cục có kiểu dữ liệu là số thực

int main()
{
	/*
	 * 1. Khai báo biến:     
	 *  <Khai báo kiểu dữ liệu> <Tên Biến> = <Giá trị>;
	 *  <Khai báo kiểu dữ liệu>: Kiểu số nguyên, kiểu số thực, kiểu chuỗi, kiểu ký tự, kiểu logic
	 *  Kiểu số nguyên: int, long, byte...'
	 *  Kiểu số thực: float, double
	 *  Kiểu chuỗi: String(khi học java1 hoặc C#), char name[] - Chuỗi là nhiều ký tự ghép lại thì thành 1 chuỗi
	 *  Kiểu ký tự: char - chỉ có thể lưu trữ được 1 ký tự.
	 *  Kiểu logic: bool hoặc boolean (Java và C# sẽ có) ở lập trình C thì nó chỉ trả 0 và 1
	 */
	/*
	 * Cách đặt tên biến với 2 từ trở lên (Khuyên về sau nên đặt tên biến bằng tiếng anh)
	 * 3 Cách đặt:
	 * 1. normal: tensinhvien, tuoisv
	 * 2. CamelCase: TenSinhVien, TuoiSv
	 * 3. Under_Score: ten_sinh_vien, Tuoi_Sinh
	 * TÊN BIẾN CÓ PHÂN BIỆT CHỮ HOA VÀ CHỮ THƯỜNG
	 * TÊN BIẾN KHÔNG ĐƯỢC LÀ TỪ KHÓA CỦA NGÔN NGỮ (int,long,float,double.......)
	 *
	 */
	//Khai báo 1 biến có thể chưa tuổi
	int tuoi_sv = 18;
	int tuoi_Sv = 18;//Phân biệt chữ hoa chữ thường
	int tuoi = 33;//Khai báo 1 biến có kiểu dữ liệu là số nguyên và có khởi tạo giá trị ban đầu
	int tuoi2;//Khai báo 1 biến có kiểu dữ liệu là số nguyên và không khởi tạo giá trị ban đầu
	int a, b, c, d, e = 9;//Khai báo nhiều biến có cùng kiểu dữ liệu và có thể khởi tạo giá trị hoặc không khởi tạo giá trị ban đầu

	//HÀNH ĐỘNG KHAI BÁO BIẾN BÊN TRONG 1 HÀM ĐƯỢC GỌI LÀ BIẾN CỤC BỘ

	//HẰNG SỐ LÀ GIÁ TRỊ CỐ ĐỊNH KHÔNG THỂ THAY ĐỔI
	const float PI= 3.14;//const có nghĩa ám chỉ lập trình viên đang muốn khai báo 1 hằng số

	//GÁN GIÁ TRỊ CHO BIẾN
	int temp;//temp đang không chưa giá trị nào cả
	//PHÍM TẶT: Ctrl + Space sẽ gợi ý code hoặc tìm đến biến hoặc hàm....
	temp = 89;//Phải gọi đúng tên biến đã đặt sau đó dùng dấu = để gán giá trị cho biến
	
}