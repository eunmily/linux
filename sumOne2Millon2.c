#include <stdio.h>

int main(void)
{

	long long sum = 0LL;
	/*
	int i = 1;
	while ( i <= 1000000) {
		sum = sum + i ; 
		++i;
	}
	*/

	for ( int i = 1; i <= 1000000;i +=2) {
		sum = sum + i + i + 1;
	}
	
	
	printf("sum[1,1000000] : %lld\n",sum);
	return 0 ;
}
