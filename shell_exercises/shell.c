#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void)
{
    char input[BUFFER_SIZE];
    char *argv[2];

    while (1)
    {
        printf("#shellPrompt$ ");
        fflush(stdout);

        if (fgets(input, BUFFER_SIZE, stdin) == NULL)
        {
            printf("\n");
            break;
        }

        input[strcspn(input, "\n")] = '\0';

        if (strlen(input) == 0)
            continue;

        argv[0] = input;
        argv[1] = NULL;

        pid_t pid = fork();
        if (pid == -1)
        {
            perror("fork");
            exit(EXIT_FAILURE);
        }

        if (pid == 0)
        {
            if (execve(argv[0], argv, NULL) == -1)
            {
                perror("execve");
                exit(EXIT_FAILURE);
            }
        }
        else
        {
            int status;
            wait(&status);
        }
    }

    return 0;
}

