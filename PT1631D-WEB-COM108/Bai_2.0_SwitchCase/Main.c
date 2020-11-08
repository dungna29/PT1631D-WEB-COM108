#include <stdio.h>
/// <summary>
/// Tạo menu trong lập trình
/// Switch Case
/// </summary>
/// <returns></returns>
int main()
{
	/*
	 * Xây dựng 1 chương trình máy tính bỏ túi
	 * 1. Phép Cộng
	 * 2. Phép Trừ
	 * 3. Phép Nhân
	 * 4. Phép Chia
	 */
	printf("Chuong Trinh May Tinh Bo Tui \n");
	printf("1. Phep Cong \n");
	printf("2. Phep Tru \n");
	printf("3. Phep Nhan \n");
	printf("4. Phep Chia \n");
	printf("Moi ban chon chuc nang: \n");
	int input = 0;
	scanf_s("%d", &input);
	switch (input)//Cần truyền 1 giá trị vào bên trong Switch Case
	{
	case 1://Trường hợp sẽ chọn ở đây đang là số nguyên
		printf("1. Phep Cong");
		//Thực hiện các bài toán tại đây hoặc đây có thể coi như là BODY CODE
		break;//Dùng để ngắt sau khi thực hiện hành động của CASE
	case 2:
		printf("2. Phep Tru");
		break;
	case 3:
		printf("3. Phep Nhan");
		break;
	case 4:
		printf("4. Phep Chia");
		break;
	default://Nếu CASE chọn mà không có ở trên thì nó sẽ vào đây
		printf("Chuc nang ban chon khong ton tai");
		break;
	}
	//Bài tập biến bài tập trên thành 1 bài toán hoàn chỉnh cho phép người dùng nhập vào 2 số
	//và thực hiện phép tính do người dùng lựa chọn chức năng


	//Các bạn thử code tạo ra 1 menu cho người dùng nhập vào và chọn chức năng sử dụng IF ELSE
}