#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int
main(void)
{
	printf("%ld\n%ld\n", (long)getpid(), (long)getppid());
	return 0;
}
