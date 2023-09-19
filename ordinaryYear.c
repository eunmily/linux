#include <stdio.h>

int main(void)
{
	int year;
	printf("input year : ");
	scanf("%d", &year);
	
	//int isOrdinary =!( (year %4==0 && year % 100 !=0 ) || year % 400 == 0);
	int isOrdinary = year % 4!= 0 || year % 100 == 0&& year % 400!= 0;
	printf("%d is ordinary : %d\n", year, isOrdinary);
	printf("1 ===> leapyear\n");
	return 0;

}
