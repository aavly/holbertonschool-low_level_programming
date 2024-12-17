#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc < 2) 
    {
        printf("Usage: _which filename\n");
        return 1;
    }

    char *path = getenv("PATH");
    
    if (!path) 
	    return 1;

    char fullpath[1024];
    char *dir = strtok(path, ":");

    while (dir) 
    {
        snprintf(fullpath, sizeof(fullpath), "%s/%s", dir, argv[1]);
        if (access(fullpath, F_OK) == 0)
       	{
            printf("%s\n", fullpath);
            return 0;
        }
        dir = strtok(NULL, ":");
    }

    printf("%s not found\n", argv[1]);
    return 1;
}
