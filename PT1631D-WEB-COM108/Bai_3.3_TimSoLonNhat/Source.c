#include <stdio.h>
int main()
{
	printf("moi ban nhap so lan ma ban muon\n");
	int a = 0;
	scanf_s("%d", &a);
	int arrSothutu[100];
	int i = 0;
	for (int i = 0; i < a; i++)
	{
		printf("so thu %d ban muon nhap la: \n", i);

		scanf_s("%d", &arrSothutu[i]);
		

	}
	for (size_t i = 0; i < a; i++)
	{
		printf("%d - ", arrSothutu[i]);
	}
	return 0;
}
