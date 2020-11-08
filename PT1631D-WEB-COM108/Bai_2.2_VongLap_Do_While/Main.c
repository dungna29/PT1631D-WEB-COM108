#include <stdio.h>
/// <summary>
/// VÒNG LẶP DO WHILE
/// Để ngắt vòng lặp luôn cần có điều kiện thỏa mãn
/// Sẽ thực hiện công việc ít nhất là 1 lần
/// </summary>
/// <returns></returns>
int main()
{
	//Phần 1: Cách sử dụng  ---   do + tab
	// do 
	// {
	//		Thực hiện 1 hành động nào đó
	// }
	// while (False); - Nếu điều kiện là False thì nó sẽ thực hiện công việc đó 1 lần
	while (5 > 8)
	{
		printf("Day la vong lap While");
	}
	do
	{
		printf("Day la vong lap Do While \n");
	}
	while (5 > 8);

	//Viết chương trình cho người yêu
	int input = 0;
	// do
	// {
	// 	printf("Chon 1(co) hoac 0(khong) \n");
	// 	printf("Em co yeu anh khong ? \n");
	// 	scanf_s("%d", &input);
	// 	if (input == 1)
	// 	{
	// 		printf("Cam on em da chon anh");
	// 		break;
	// 	}
	// }
	// while (1);
	do
	{
		printf("Chon 1(co) hoac 0(khong) \n");
		printf("Em co yeu anh khong ? \n");
		scanf_s("%d", &input);		
	} while (!(input == 1));
	printf("Cam on em da chon anh");
}