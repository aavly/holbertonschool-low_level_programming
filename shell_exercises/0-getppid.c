#include <unistd.h>
#include <stdio.h>

int main(void)
{
	pid_t ppid = getppid();
	printf("%d\n", ppid);
	
	return 0;
}
