#include <stdio.h>
#include <pthread.h>
#include <sys/types.h>
#include <fcntl.h>

int main(void)
{
    int fptr = open("poke.txt", O_APPEND|O_WRONLY);
    dup2(fptr, 1);
    printf("jokes on you!\n");
    return 0;
}
