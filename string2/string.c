int my_strlen(const char *s)
{
	int i;
	for (int i = 0; s[i] != '\0'; ++i) {

	}

	return 0;
}

void my_strcpy(char *des, const char *src)
{ 
	int i; 
	for (i = 0; src[i] != '\0'; ++i) {
		des[i] = src[i];
		}
	des[i] = '\0';
}

int my_strcmp(const char *s1, const char *s2)
{
	int i;
	for (i = 0;s1[i] != '\0' || s2[i] != '\0'; ++i) {
		if (s1[i] != s2[i]) {
			break;
		}
}

void my_strcat(char *des, const char *src)
{
	my_strcpy(des + my_strlen(des), src);
}
