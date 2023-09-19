#include <stdio.h>

struct student {
	char name[21];
	int kor;
	int eng;
	int mat;
	int sum;
	double average;
	int rank;
};

int main(void)
{
	FILE *fin, *fout;
	fin = fopen("score.dat", "r");
	fout = fopen("score.out", "w");
	if (fin == NULL || fout == NULL) {
		fprintf(stderr, "can't open file\n");
		return 1;
	}
	
	struct student students[10];
	for (int i = 0; i < 10; ++i) {
		fscanf(fin, "%s %d %d %d", 
		students[i].name, &students[i].kor, &students[i].eng, &students[i].mat);

		students[i].sum = students[i].kor + students[i].eng + students[i].mat;
		students[i].average = (double)students[i].sum / 3.0;
		students[i].rank = 1;
	}
	
	for (int i = 0; i < 10; ++i) {
		for (int j = 0; j < 10; ++j) {
			if (students[i].sum < students[j].sum) { 
				++students[i].rank;
				}
			}
		}
	
	/* sorting.
	for (int i = 0; i < 10 - 1; ++i) {
		for (int j = i + 1; j < 10; ++j) {
			if (students[i].sum < students[j].sum) {
				struct student tmp = students[i];
				students[i] = students[j];
				students[j] = tmp;
			}
		}
	}
	*/
	struct student *table[10];
	for (int i = 0; i< 10; ++i) {
		table[i] = &students[i];
	}
	
	for (int i = 0; i < 10-1; ++i ) {
		for (int j = i + 1; j < 10; ++j) {
			if (table[i]->sum < table[j]->sum) {
					struct student *tmp = table[i];
					table[i] = table[j];
					table[j] = tmp ;
				}
			}
		}	
	
		//&students[i]. name[1]
	fprintf(fout, "--------------------------------------------------\n");
	fprintf(fout, "       name              kor eng mat sum average rank  \n");
	fprintf(fout, "--------------------------------------------------\n");
	for (int i = 0; i < 10; ++i) {	
		
		fprintf(fout, "%-20s %3d %3d %3d %3d %6.2f %2d\n",
					table[i]->name, table[i]->kor, table[i]->eng, table[i]->mat,
					table[i]->sum, table[i]->average, table[i]->rank);
	}
	fprintf(fout, "--------------------------------------------------\n");
	
	fclose(fin);
	fclose(fout);		
	return 0;
}

