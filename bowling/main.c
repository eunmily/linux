#include <stdio.h>

int main(void)
{
	int frameScores[11] = {0, };
	
	//1 ~9 frame
	int scores[10][3] = {0, };
	for (int i = 1; i <= 9; ++i) {
		printf("%d frame first cast : ", i);
		scanf("%d", &scores[i][1]);
		
		if (i >= 2 && scores[i-1][1] + scores[i-1][2] == 10 && scores[i-1][1] != 10) {
			int bonus = scores[i][1];
			frameScores[i-1] = frameScores[i-2] + 10 + bonus;
			printf("%d frame Score : %d\n", i-1, frameScores[i-1]);
			
		} else if  (i >= 3 && scores[i-2][1] == 10 && scores[i-1][1] == 10) {
			int bonus = scores[i-1][1] + scores[i][1];
			frameScores[i-2] = frameScores[i-3] + 10 + bonus;
			printf("%d frame Score : %d\n", i-2, frameScores[i-2]);
		}
		
		if (scores[i][1] != 10) {
			printf("%d frame second cast : ", i);
			scanf("%d", &scores[i][2]);
		}
		if (i >= 2 && scores[i-1][11] == 10) {
			int bonus = scores[i][1] + scores[i][2];
			frameScores[i-1] = frameScores[i-2] + 10 + bonus;
			printf("%d frame Score : %d\n", i-1, frameScores[i-1]);
		}
		if (scores[i][1] + scores[i][2] < 10) {
			frameScores[i] = frameScores[i-2] + scores[i][1] + scores[i][2];
			printf("%d frame Score : %d\n", i, frameScores[i]);
		}
	}
	
	// 10frame
	int scores10[4] = {0, };
	printf("%d frame first cast : ", 10);
	scanf("%d", &scores10[1]);
	
	if  (scores[9][1] + scores[9][2] == 10 && scores[9][1] != 10) {
		frameScores[9] = frameScores[8] + 10 + scores10[1];
		printf("%d frame Score : %d\n", 9, frameScores[9]);
		
	} else if (scores[8][1] == 10 && scores[9][1] == 10) {
		frameScores[9] = frameScores[8] + 10 + scores10[1];
		printf("%d frame Score : %d\n", 8, frameScores[8]);
	}
	
	printf("%d frame second cast : ", 10);
	scanf("%d", &scores10[2]);
	
	if (scores[9][1] == 10) {
		frameScores[9] = frameScores[8] + 10 + scores10[1] + scores10[2];
		printf("%d frame Score : %d\n", 9, frameScores[9]);
		
	}
	if (scores10[1] + scores10[2] < 10) {
		frameScores[10] = frameScores[9] + scores10[1] + scores10[2];
		printf("%d frame Score : %d\n", 10, frameScores[10]);	
		
	} else { 
		printf("%d frame third cast : ", 10);
		scanf("%d", &scores10[3]);
		
		frameScores[10] = frameScores[9] + scores10[1] + scores10[2] + scores10[3];
		printf("%d frame Score : %d\n", 10, frameScores[10]);
	}

	return 0;
}
