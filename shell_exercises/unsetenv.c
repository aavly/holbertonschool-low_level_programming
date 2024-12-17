#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int _unsetenv(const char *name)
{
    char **env = (char **)environ;
    size_t len_name = strlen(name);

    for (int i = 0; env[i] != NULL; i++)
    {
        if (strncmp(env[i], name, len_name) == 0 && env[i][len_name] == '=')
        {
            free(env[i]);

            for (int j = i; env[j] != NULL; j++)
            {
                env[j] = env[j + 1];
            }

            return (0);
        }
    }

    return (-1);
}

int main()
{
    _unsetenv("MYVAR");
    return (0);
}

