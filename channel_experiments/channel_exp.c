#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int create_process(int *ctr)
{
    pid_t process_id = getpid();
    if(fork() == 0)
    {
	printf("CHILD! ctr: %d\nPID: %d\n\n", *ctr, process_id);
    }
    else
    {
	printf("PARENT! ctr: %d\nPID: %d\n\n", *ctr, process_id);
    }
}

int main(void)
{
    printf("start\n");
    int useless_ctr = 1;
    while(useless_ctr < 3)
    {
	create_process(&useless_ctr);
	useless_ctr++;
    }
    printf("end\n");
    return 0;
}
