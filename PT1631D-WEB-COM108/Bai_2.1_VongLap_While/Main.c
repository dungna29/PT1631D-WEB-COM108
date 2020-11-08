#include <stdio.h>
/// <summary>
/// VÒNG LẶP WHILE
/// </summary>
/// <returns></returns>
int main()
{
	//Khái niệm chung: Thực hiện lặp đi lặp lại 1 hành động nào đó
	// while (điều kiện luôn đúng)
	// {
	// 		Một công việc cần được thực hiện lặp đi lặp lại
	//		//break , goto, continue (Về khám phá thêm)
	// }

	//Viết 1 câu chào 1000 lần
	int a = 0;
	while (a < 10)//Nếu biểu thức thay bằng true - 1 thì sẽ gọi là vòng lặp vô hạn
	{
		printf("Chao cac ban lan thu %d \n", a);
		a++;//Tăng a lên thì vòng lặp này mới ko phải vòng lặp vô hạn
	}
	//Khi sử dụng vòng lặp cần biết khi nào thì sẽ phải dừng vòng lặp
	//Hướng dẫn sử dụng câu lệnh break
	printf("----------------- \n");
	int b = 0;
	while (1)
	{		
		printf("Chao cac ban lan thu %d \n", b);
		b++;
		if (b > 10)
		{
			break;//Dùng để ngắt vòng lặp
		}
	}
}