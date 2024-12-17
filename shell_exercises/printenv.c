#include <stdio.h>

int main(void)
{
    char **env = environ;

    while (*env)
    {
        printf("%s\n", *env);
        env++;
    }

    return 0;
}
