#include <stdio.h>

int main()
{
	int arrNumber[] = { 8,7,1,2,3 };

	//In mảng số nguyên ra màn khi chưa sắp xếp
	printf("Mang truoc khi sap xep \n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arrNumber[i]);
	}

	//Thuật toán sử dụng 2 vòng lặp for
	for (int i = 0; i < 5; i++)
	{
		printf(" \n Lan chay thu: %d \n", i);
		for (size_t j = i + 1; j < 5; j++)
		{
			printf(" \n Gia tri %d > %d \n", arrNumber[i], arrNumber[j]);
			int temp = arrNumber[i];
			if (arrNumber[i] > arrNumber[j])//Muốn sắp xếp ngược thì đảo dấu
			{
				arrNumber[i] = arrNumber[j];
				arrNumber[j] = temp;
			}
			for (int i = 0; i < 5; i++)
			{
				printf("%d ", arrNumber[i]);
			}
		}
	}

	printf("\n Mang sau khi sap xep \n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arrNumber[i]);
	}
}
