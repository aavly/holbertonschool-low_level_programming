#include <stdio.h>
#include <string.h>

char *_getenv(const char *name, char **env)
{
    for (int i = 0; env[i] != NULL; i++)
    {
        char *env_var = env[i];
        char *equal_sign = strchr(env_var, '=');
        if (equal_sign != NULL)
        {
            size_t name_len = equal_sign - env_var;
            if (strncmp(env_var, name, name_len) == 0 && name_len == strlen(name))
            {
                return equal_sign + 1;
            }
        }
    }
    return NULL;
}

int main(int argc, char *argv[], char *env[])
{
    if (argc > 1)
    {
        char *value = _getenv(argv[1], env);
        if (value)
        {
            printf("%s=%s\n", argv[1], value);
        }
        else
        {
            printf("%s not found\n", argv[1]);
        }
    }
    else
    {
        printf("Please provide an environment variable name\n");
    }

    return 0;
}
