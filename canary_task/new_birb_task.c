#include <stdio.h>

int check_for_passwd(void)
{
    char passwd[] = "]cor";
    int mst = 0;
    int ctr = 0;
    while(1)
    {
	if(getchar() == passwd[ctr])
	{
	    ctr++;
	}
	else
	{
	    ctr = 0;
	    mst++;
	}
	if (ctr == 4)
	{
	    return 0;
	}
    }
    return 1;
}

int main(void)
{
    printf("enter the passwd ]cor\n");
    check_for_passwd();
    printf("success\n");
    return 0;
}
