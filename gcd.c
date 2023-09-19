#include <stdio.h>

int gcd(int a,int b)
{
	int r;
	r = a % b;
	while (r != 0) {
		a = b;
		b = r;
		r = a % b;
	}
	return b;
}	

int main(void)
{
	int a, b;
	printf("input 2 nums : ");
	scanf("%d %d", &a, &b);
	int result = gcd(a, b);
	
	printf("result : %d\n", result);
	return 0;
}	
