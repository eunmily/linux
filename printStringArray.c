#include <stdio.h>

void printStringArray1(char (*arr)[20], int size)
{
	for (int i = 0; i < size; ++i) {
		printf("%s\n", &arr[i][0]);
		}
	}
void printStringArray2(char **arr, int size)
{
	for (int i = 0; i < size; ++i) {
		printf("%s\n", arr[i]);
	}
}

int main(void)
{
	char cities1[][20] = {
		"Seoul", "Los Angeles", "Rio de janeiro", "Morcow", "Paris"
	};
	printStringArray1(cities1, 5);
	
	char cities2[] = {
		"Seoul", "Los Angeles", "Rio de janeiro", "Morcow", "Paris"
	};
	printStringArray2(cities2, 5);
	
	return 0;
}
	
