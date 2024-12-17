#include <stdio.h>

int main(int argc, char *argv[], char *env[])
{
    printf("Address of env: %p\n", (void *)env);
    printf("Address of first env element: %p\n", (void *)env[0]);

    if (env == (char **)environ)
    {
        printf("env and environ point to the same location.\n");
    }
    else
    {
        printf("env and environ do NOT point to the same location.\n");
    }

    return 0;
}
