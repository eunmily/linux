#include <stdio.h>

int main (void)
{
	int num;
	printf ("input num : ");
	scanf("%d", &num);
	/*
	//int isOdd = (num % 2 ==1) ;
	
	//printf("%d is a odd : %d\n", num, isOdd) ;
	if (num %2 == 1) {
		printf("%d is a odd\n", num);
	} else {
		printf("%d is a even\n", num);
	}*/
	printf ("%d is a %s\n", num, (num % 2 ) ? "odd" : "even");
	
	return 0;
}
