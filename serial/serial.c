
int count = 0;

int getSerialNumber(void)
{
	static int count = 0;
	
	return ++count;
}
