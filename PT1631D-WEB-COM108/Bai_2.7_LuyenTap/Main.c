#include <stdio.h>

/*Lấy điểm bất kì 10 bạn
	 * Bài tập: Viết 1 chương trình sử dụng Switch Case để tạo ra menu sau:
	 * 1. Xếp loại học lực khi nhập điểm GPA vào - Tùy biến các loại xếp hạng
	 * 2. Cộng 4 số lại với nhau.
	 * 3. Kiểm tra số vào là số chẵn hay lẻ.
	 * 4. Kiểm tra số nguyên âm và nguyên dương.
	 * 5. Kiểm tra điểm thi để biết học lại hay không?
	 * PHẢI DÙNG HÀM CHO TỪNG CHỨC NĂNG + 1 ĐIỂM NẾU DÙNG HÀM CÓ THAM SỐ
*/

/// <summary>
/// Khi lập trình tạo ra 1 hàm cần phải giải thích cái hàm đó bằng comment
/// Comment hàm dùng để làm gì các tham số vào có ý nghĩa gì
/// </summary>
void chucNang1()
{
	//Code các chức năng vào đây
}
void chucNang2()
{

}
void chucNang3()
{

}
void chucNang4()
{

}
void chucNang5()
{

}

void chonChuNang(int input)
{
	switch (input)
	{
	case 1:
		chucNang1();//Gọi chức năng ra sử dụng
		break;
	case 2:
		chucNang2();
		break;
	case 3:
		chucNang3();
		break;
	case 4:
		chucNang4();
		break;
	case 5:
		chucNang5();
		break;
	default:
		break;
	}
}
void menu()
{
	printf("********** QUAN LY DUNGNA **********");
	printf("********** 1. CN1         **********");
	printf("********** 2. CN1         **********");
	printf("********** 3. CN1         **********");
	printf("********** 4. CN1         **********");
	printf("********** 5. CN1         **********");
	printf("Moi ban chon chuc nang: ");
	int input = 0;
	scanf_s("%d", &input);
	chonChuNang(input);
}
int main()
{
	menu();
}