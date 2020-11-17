#include <stdio.h>
#include <string.h>
int main()
{
	char name[50];
	printf("Moi ban nhap ten 1 vao day: ");
	gets_s(name, 50);	
	int doDai = strlen(name);
	while (1)
	{
		printf("%c", name[doDai]);		
		if (doDai == 0)
		{
			break;
		}
		doDai--;
	}
	
}