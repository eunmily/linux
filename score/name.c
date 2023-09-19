#include <stdio.h>

int main(void)
{
	char name[21];
	//char but[100];
	//char  *name;
	//name = but;
	
	scanf("%20s",name);   //scanf("%s", &name[0]);
	
	printf("%s\n", name);   //printf("%s",&name[0]);
	return 0;
}
