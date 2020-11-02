#include <stdio.h>
/// <summary>
/// Toán tử so sánh
/// == (ss bằng) > (ss lớn hơn) < (ss nhỏ hơn)
/// >= (lớn hoặc hoặc bằng) 
/// <= (nhỏ hoặc hoặc bằng)
/// != (so sánh khác)
/// </summary>
/// <returns></returns>
int main()
{
	//1. So sánh bằng == là 2 vế của biểu thức phải bằng nhau thì trả ra true và trog C là trả ra 1
	printf("5 = 5 la: %d True\n", 5 == 5);
	printf("5 = 6 la: %d False\n", 5 == 6);
	
	//2. So sánh hơn > hoặc <
	printf("5 > 6 la: %d False\n", 5 > 6);//Trả ra 0 chính False
	printf("5 < 6 la: %d True\n", 5 < 6);//Trả ra 1 chính True

	//3. So sánh >= hoặc <=
	printf("5 >= 6 la: %d False\n", 5 >= 6);
	printf("5 <= 6 la: %d True\n", 5 <= 6);
	printf("5 >= 5 la: %d True\n", 5 >= 5);

	//4. So sánh khác
	printf("5 != 5 la: %d False\n", 5 != 5);
	printf("5 != 6 la: %d True\n", 5 != 6);
	return 0;
}