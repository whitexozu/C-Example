#include <stdio.h>

void lovecall();

char *getname()
{
	char name[128];

	printf("input name : ");
	scanf("%s:", name);
	return name;
}
int main()
{
	char *str;

	str = getname();

	printf("i like you.\n");
	printf("%s\n", str);
	// lovecall();

	return 0;
}
