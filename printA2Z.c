#include <stdio.h>

int main (void)
{
	//char c = 'A';
	int c = 'A';
	
	
	while (c <= 'Z') {
		printf("%c", c);
		++c;
	}
	printf("\n");
	
	printf("ABCDEFGHIJKLMNOPQRSTUVWXYZ\n");	

	return 0;
}
