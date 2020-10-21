#include <stdio.h>
int main()
{
	int year = 2020;
	float diem = 5.5;
	/*
	 * Xuất ra màn hình trong ngôn ngữ C
	 * printf("Cho chuỗi vào đây");
	 */
	printf("Chao Cac Ban Den Voi C POLY \n");//In ra màn hình 1 chuỗi
	//Printf có định dạng
	//%d chính là định dạng mà bạn muốn in ra màn hình
	printf("Chao cac %d ban den voi C \n", year);
	printf("%d Chao cac ban den voi C %d \n", year, year);
	printf("%d Chao cac ban den voi C %d - Hay co Gang Dat Diem lon hon %f", year, year,diem);
	//Tổng hợp các định dạng: %c,%d,%f,%lf,%s - Tự tìm hiểu thêm
}