#include <stdio.h>

int main (void)
{
	//int num = 100;
	int nums[10] = {50, 30, 100, 10, 20, 60, 40, 70, 90, 80}; //initaialized list 
	
	int sum = 0;
	for (int i = 0; i < 10; ++i) {
		sum = sum + nums[i];
	}
	printf("sum : %d\n", sum);
	return 0;
}
