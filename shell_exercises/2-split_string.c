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
	char str[] = "Just a placeholder for now";
	
	splitString(str);

	return (0);
}
