#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>
#include <malloc.h>

void create_command(char **arr_args, int cmd_num)
{
    char ch;
    int ctr = 0;
    while((ch = getchar()) != '\n' && ctr < 255)
    {
	if(ch == ' ')
	{
	    continue;
	}
	if(ch == '|')
	{
	    ctr++;
	    arr_args[cmd_num][ctr] = '\0';
	    cmd_num++;
	    ctr = 0;
	    continue;
	}
	arr_args[cmd_num][ctr] = ch;
	ctr++;
    }
    arr_args[cmd_num][ctr] = '\0';
}

int main(void)
{
    unsigned char qt_of_args = 4;
    unsigned char pos = 0;
    char status = 0;
    unsigned char ctr = 0;
    char **args = (char **)malloc(qt_of_args);
    while(pos < qt_of_args)
    {
	args[pos] = (char *)malloc(256);
	pos++;
    }
    char cmd[] = "exit";
    while(status != -1)
    {
	create_command(args, 0);
	ctr = 0;
	while((args[ctr][0] >= 'A' && args[ctr][0] <= 'Z') || (args[ctr][0]\
 >= 'a' && args[ctr][0] <= 'z'))
	{
	    if(strcmp(args[ctr], cmd) == 0)
	    {
	    	status = -1;
	    }
	    if(strcmp(args[ctr], "joux") == 0)
	    {
	    	if(fork() == 0)
	        {
		    execlp("/home/student/Documents/StudentPrograms/\
C_Programming/list_program", NULL);
		    return(0);
	        }
	        else
	        {
		    wait();
	        }
	    }
	    if(strcmp(args[ctr], "ps") == 0)
	    {
	        if(fork() == 0)
	        {
		    execlp("ps", "ps", NULL);
		    return(0);
	        }
	        else
	        {
		    wait();
	        }
	    }
	    ctr++;
	    if(ctr >= qt_of_args)
	    {
		break;
	    }
	}
    }
    return 0;
}
