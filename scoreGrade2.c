#include <stdio.h>

int main(void)
{
	int score;
	printf("input score : ");
	scanf("%d", &score);
	
	char grade;
	
	if (score >= 90) {
		grade = 'A';
		//printf("score : %d -- grade: A\n",score);
	} else if (score >= 80 /*&& score < 90 */) {
		grade = 'B';
		//printf("score : %d -- grade: B\n",score);
	} else if (score >= 70) {
		grade = 'C';
		//printf("score : %d -- grade: c\n",score);
	} else if (score >= 60) {
		grade = 'D';
		//printf("score : %d -- grade: D\n",score);
	} else {
		grade = 'F';
		//printf("score : %d -- grade: F\n",score);
	}

	return 0;
}
