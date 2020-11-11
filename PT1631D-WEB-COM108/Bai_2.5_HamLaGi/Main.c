#include <stdio.h>
/// <summary>
/// HÀM TRONG LẬP TRÌNH
/// PHẦN 1: HÀM KHÔNG TRẢ VỀ - VOID
/// Trong lập trình luôn tạo 1 tư duy đó là INPUT và OUTPUT
/// HÀM CŨNG CẦN CÓ INPUT VÀ OUTPUT
/// Hàm giúp thực hiện một hành động nào đó trong lập trình, ngoài ra
/// giúp dễ quản lý code và bảo trì code tốt hơn.
/// </summary>
/// <returns></returns>
/*
 * VÍ DỤ 1: HÀM KHÔNG TRẢ VỀ KHÔNG CÓ THAM SỐ TRUYỀN VÀO
 * void là kiểu hàm
 * void [tên hàm](<tham số>){ 
 *	Thân hàm để thực hiện 1 hành động nào đó
 * }
 * Nguyên tắc đặt tên hàm: <động từ đứng trước> + <Tên hàm đấy>
 */
void inRaManHinhCauChao()
{
	printf("Day la ham Xin Chao");
	//Các bạn có thể tùy biến các chức năng bên trong 1 hàm
	//Hàm giúp tái sử dụng code đấy là viết 1 lần dùng ở nhiều nơi
	//Hàm giúp lập trình viên dễ quản lý code hơn
	//TÊN HÀM KHÔNG ĐƯỢC GIỐNG NHAU - NHƯNG NẾU KHÁC THAM SỐ THÌ ĐƯỢC
}

int a = 0, b = 0;//Khai báo biến toàn cục để các hàm khác có thể gọi lại
void moiNguoiDungNhapVao2So()
{
	printf("Moi ban nhap so thu 1: ");
	scanf_s("%d", &a);
	printf("Moi ban nhap so thu 2: ");
	scanf_s("%d", &b);
}
int main()
{
	//Gọi hàm vào trong main
	//Ctrl + Space tìm tên hàm
	inRaManHinhCauChao();

	//Ví dụ tái sử dụng code
	
	printf("Chuong Trinh May Tinh Bo Tui \n");
	printf("1. Phep Cong \n");
	printf("2. Phep Tru \n");
	printf("3. Phep Nhan \n");
	printf("4. Phep Chia \n");
	printf("Moi ban chon chuc nang: \n");
	int input = 0;

	scanf_s("%d", &input);
	switch (input)
	{
	case 1:
		printf("1. Phep Cong \n");
		moiNguoiDungNhapVao2So();
		printf("%d + %d = %d", a, b, a + b);
		break;
	case 2:
		printf("2. Phep Tru");
		moiNguoiDungNhapVao2So();
		printf("%d - %d = %d", a, b, a - b);
		break;
	case 3:
		printf("3. Phep Nhan");
		moiNguoiDungNhapVao2So();
		printf("%d x %d = %d", a, b, a * b);
		break;
	case 4:
		printf("4. Phep Chia");
		moiNguoiDungNhapVao2So();
		printf("%d : %d = %d", a, b, a / b);
		break;
	default:
		printf("Chuc nang ban chon khong ton tai");
		break;
	}

}