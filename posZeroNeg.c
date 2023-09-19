#include <stdio.h>

int main(void)
{
	int num;
	printf("input num : ");
	scanf("%d", &num);
	
	// positive of zero or negative
	if (num > 0) {
		printf("%d is a positive\n", num);
	} else if (num == 0) { 
		printf("%d is a zero\n", num);
	} else {
			printf("%d is a negative\n",num);
		}
	}		
	return 0;
}
