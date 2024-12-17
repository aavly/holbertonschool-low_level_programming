#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int _setenv(const char *name, const char *value, int overwrite)
{
    char **env = (char **)environ;
    size_t len_name = strlen(name);
    size_t len_value = strlen(value);
    char *new_var = malloc(len_name + len_value + 2); 

    if (new_var == NULL)
        return -1;

    snprintf(new_var, len_name + len_value + 2, "%s=%s", name, value);

    for (int i = 0; env[i] != NULL; i++)
    {
        if (strncmp(env[i], name, len_name) == 0 && env[i][len_name] == '=')
        {
            if (overwrite)
            {
                free(env[i]);
                env[i] = new_var;
                return 0;
            }
            free(new_var);
            return -1;
        }
    }

    for (int i = 0; env[i] != NULL; i++)
    {
        if (env[i] == NULL)
        {
            env[i] = new_var;
            env[i + 1] = NULL;
            return 0;
        }
    }

    env[0] = new_var;
    env[1] = NULL;
    return 0;
}

int main()
{
    _setenv("MYVAR", "123", 1);
    printf("%s\n", getenv("MYVAR"));
    return 0;
}
