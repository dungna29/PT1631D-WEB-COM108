#include <stdio.h>
/// <summary>
/// Toán tử Logic
/// || (Hoặc hoặc) && (Và và) !(Phủ định)
/// </summary>
/// <returns></returns>
int main()
{
	// Toán tử Logic giúp ghép nhiều biểu thức lại với nhau.
	//1. Toán tử <biểu thức 1> || <biểu thức 2> || <biểu thức 3>
	//chỉ cần 1 trong 2 biểu thức đúng thì sẽ trả ra True 1
	printf("5 >= 6 || 5 < 7 la: %d True\n", (5 >= 6) || (5 < 7));
	

	//2. Toán vử <biểu thức 1> && <biểu thức 2> && <biểu thức 3>
	// Bắt buộc cả 2 về của biểu thức phải True
	printf("5 >= 6 && 5 < 7 la: %d False\n", (5 >= 6) && (5 < 7));
	
	//3. Toán tử phủ định ! nghĩa là làm ngược lại kết quả của biểu thức
	// Đặt ! trước cả 1 mệnh đề sẽ làm ngược lại kết quả
	printf("!(5 >= 6 && 5 < 7) la: %d True\n", !((5 >= 6) && (5 < 7)));
	return 0;
}