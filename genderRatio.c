#include <stdio.h>

int main(void)
{
	int man;
	int woman;
	
	printf("man : \n");
	scanf("%d",&man);
	printf("woman : \n");
	scanf("%d",$woman);

	//input
	//double manRatio = 1.0 * man / (man + woman) * 100;
	//double womanRatio = 1.0 * woman / (man + woman) *100;
	double manRatio = (double)man / (man + woman) * 100;
	double womanRatio = (double)woman / (man + woman) * 100;
	
	
	printf("manRatio : %.2f%%\n", manRatio);
	printf("womanRatio : %.2f%%\n", womanRatio);
	//print
	return 0;
 }
