#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[80];
	int cnt = 0;

	printf("문장 입력 : ");
	fgets(str);

	for(int i =0; i <=23; ++i)
	{
		if(str[i] >= 65 && str[i] <= 90)
		{
			str[i] + 32;
			cnt++;
		}
	}
	printf("바뀐 문장 : ");
	puts(str);
	printf("바뀐 문자 수 : %d\n",cnt);

	return 0;
}
