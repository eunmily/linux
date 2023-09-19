#include <stdio.h>

int main(void)
{
	int score1, score2, score3, score4, score5;
	scanf("%d", &score1);
	scanf("%d", &score2);
	scanf("%d", &score3);
	scanf("%d", &score4);
	scanf("%d", &score5);
	
	int sum = score1 + score2 + score3 + score4 + score5;

	double average = (double)sum / 5.0;
	printf("sum: %d\taverage: %.2f\n", sum, average);
	return 0;
}
