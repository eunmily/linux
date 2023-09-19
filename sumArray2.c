#include <stdio.h>

int sumArray(const int *pArr, int size)
{
	int sum = 0;
	for (int i = 0; i < size; ++i) {
		sum = sum + pArr[i];
	}
	
	return sum;
}

int main(void)
{
	int nums[10] = {50, 30, 100, 10, 20, 60, 40, 70, 90, 80}; //initaialized list 
	int sum = sumArray(nums + 10);
	printf("sum : %d\n", sum);
	return 0;
}
