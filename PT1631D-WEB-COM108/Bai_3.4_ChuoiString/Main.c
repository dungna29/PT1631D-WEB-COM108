#include <stdio.h>
/// <summary>
/// CHUỖI LÀ GÌ? string - C# - String -Java
/// </summary>
/// <returns></returns>
int soSanhTen(char ten1[50], char ten2[50])
{		
	for (int i = 0; i < 50; i++)
	{
		if (ten1[i] != ten2[i])//So sánh ký tự trong mảng theo vị trí giống nhau
		{
			return 0;//Chỉ cần 1 ký tự không khớp sẽ trả về 0			
		}
	}
	return 1;
}
int main()
{
	while (1)
	{
		// Định nghĩa chuỗi: 1 chuỗi là 1 tập hợp nhiều ký tự
		char c = 'c';//Đây chỉ là khai báo ký tự char
		char ten1[50];//Khai báo 1 chuỗi có thể chứa 50 ký tự
		char ten2[50];
		//Ví dụ: Nhập tên vào sau đó in ra màn hình
		printf("Moi ban nhap ten 1 vao day: ");
		gets_s(ten1, 50);
		printf("Moi ban nhap ten 2 vao day: ");
		gets_s(ten2, 50);
		//Cách 1
		//scanf_s("%s", &ten, 50);

		//Cách 2
		//fgets(ten, 50, stdin);

		//Cách 3
		//scanf_s("%[^\n]", ten, 20);//Regex
		//printf("Ten ban vua nhap la: %s", ten1);
	
		if (soSanhTen(ten1, ten2) == 1)
		{
			printf("Hai ten ban vua nhap bang nhau \n");
		}else
		{
			printf("Khong khop \n");
		}
	}
	//1. Không thể dùng if để so sánh chuỗi
	
}

//Khám phá hàm động
void HamDongInRaMangSoNguyen(int soLan,int arrNumber[100])
{
	for (int i = 0; i < soLan; i++)
	{
		printf("%d ", arrNumber[i]);
	}
}

//
void SapXepXongInRa(int soLan, int arrNumber[100])
{
	//Sắp xếp thuật toán trước
	for (int i = 0; i < soLan; i++)
	{
		for (int j = i + 1; j < soLan; j++)
		{
			int temp = arrNumber[i];
			if (arrNumber[i] > arrNumber[j])
			{
				arrNumber[i] = arrNumber[j];
				arrNumber[j] = temp;
			}
		}
	}

	//Đoạn in ra
	for (int i = 0; i < soLan; i++)
	{
		printf("%d ", arrNumber[i]);
	}
}
