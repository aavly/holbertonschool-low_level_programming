#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    pid_t pid;
    int i;

    for (i = 0; i < 5; i++) 
    {
        pid = fork();

        if (pid < 0)
       	{
            perror("fork failed");
            exit(EXIT_FAILURE);
        } 
	else if (pid == 0) 
	{
            printf("Child %d: Executing ls -l /tmp\n", i + 1);
            char *args[] = {"/bin/ls", "-l", "/tmp", NULL};

            execve(args[0], args, NULL);

            perror("execve failed");
            exit(EXIT_FAILURE);
        } 
	else 
	{
            int status;
            if (WIFEXITED(status))
	    {
		    printf("Child %d finished with exit code %d\n", i + 1, WEXITSTATUS(status));
            } 
	    else 
	    {
                printf("Child %d did not terminate normally\n", i + 1);
            }
        }
    }

    printf("All child processes completed.\n");
    return 0;
}
