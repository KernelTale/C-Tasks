#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(void)
{
    printf("start\n");
    int ctr = 1;
    printf("PID: %d\n", getpid());
    if(fork() == 0)
    {
	ctr++;
    }
    if(fork() == 0)
    {
	ctr++;
    }
    if(ctr == 2 && fork() == 0)
    {
	ctr++;
    }
    printf("line %d end PID: %d\n", ctr, getpid());
    wait();
    return 0;
}
