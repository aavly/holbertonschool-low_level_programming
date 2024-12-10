#include <stdio.h>
#include <string.h>

void splitString(char *str)
{
	char *splitStr = strtok(str, " ");

	while (splitStr != NULL)
	{
		printf("%s\n", splitStr);
		splitStr = strtok(NULL, " ");
	}
}

int main ()
{
	char str[] = "See how this string is split up";
	
	splitString(str);

	return (0);
}
