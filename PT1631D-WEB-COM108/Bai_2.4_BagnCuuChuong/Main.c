#include <stdio.h>
/* Viết 1 chương trình sử dụng menu (Switch Case) như dưới đây:
		1. Tính tuổi người dùng sau khi nhập vào năm sinh
		2. In bảng cửu chương đơn – Khi người dùng nhập vào 1 số nguyên thì in ra bảng cửu chương đó.
		3. In tất cả các bảng cửu chương đã được học. từ 0 đến 10.
		Menu sẽ được ôm bởi 1 vòng lặp vô hạn mà em đã được học.
*/
int main()
{
	//Bước 1: Xác định sẽ có bao nhiêu biến được sử dụng
	int tuoi = 0, soNguyenBCC = 0, input = 0;
	//Bước 2: Hiển thị ra menu cho người dùng biết để có thể lựa chọn
	printf("******      Tong Hop POLY  ****** \n");
	printf("****** 1. Tinh Tuoi        ****** \n");
	printf("****** 2. BCC Theo Yeu Cau ****** \n");
	printf("****** 3. Tat Ca Cac BCC   ****** \n");
	printf("********************************* \n");
	printf("Moi ban chon chuc nang tren: ");
	scanf_s("%d", &input);

	//Bước 3: Thực hiện yêu của người dùng
	switch (input)
	{
	case 1:
		printf("Moi ban nhap nam sinh: ");
		scanf_s("%d", &tuoi);
		printf("Tuoi ban vua nhao vao la: %d", 2020 - tuoi);
		break;
	case 2:
		printf("Moi ban chon bang cuu chuong muon in ra: ");
		scanf_s("%d", &soNguyenBCC);
		printf("Bang cuu chuong %d la: \n", soNguyenBCC);
		// Cách dùng FOR
		// for (size_t i = 0; i <= 10; i++)
		// {
		// 	printf("***** %d x %d = %d ***** \n", soNguyenBCC, i, soNguyenBCC * i);
		// }
		// Dùng While
		int a = 0;
		while (a <=10)
		{
			printf("*****   %d x %d = %d   ***** \n", soNguyenBCC, a, soNguyenBCC * a);
			a++;
		}
		break;		
	case 3:
		//Để in 2 bảng cửu chương thì cần 2 vòng lặp
		for (int i = 0; i < 10; i++)
		{
			printf("Bang Cu Chuong Nhan %d \n", i);
			for (int j = 0; j < 10; j++)
			{
				printf("%d x %d = %d \n", i, j, i * j);
			}
		}
		break;
	default:
		printf("Chuc nang khong ton tai.");
		break;
	}
}
