#include <stdio.h>
#include <string.h>

void print_path(char **env)
{
    char *path = NULL;

    for (int i = 0; env[i] != NULL; i++)
    {
        if (strncmp(env[i], "PATH=", 5) == 0)
        {
            path = env[i] + 5;
            break;
        }
    }

    if (path != NULL)
    {
        char *token = strtok(path, ":");
        while (token != NULL)
        {
            printf("%s\n", token);
            token = strtok(NULL, ":");
        }
    }
    else
    {
        printf("PATH variable not found\n");
    }
}

int main(int argc, char *argv[], char *env[])
{
    print_path(env);
    return 0;
}
