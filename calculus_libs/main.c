#include <stdio.h>
#include "math_head.h"

int main(int argc, char **argv)
{
    if(argc == 3)
    {
	printf("plusfunc(%d, %d) = %d\n", atoi(argv[1]), atoi(argv[2]), \
	 plusfunc(atoi(argv[1]), atoi(argv[2])));
	printf("minusfunc(%d, %d) = %d\n", atoi(argv[1]), atoi(argv[2]), \
	 minusfunc(atoi(argv[1]), atoi(argv[2])));
	printf("multfunc(%d, %d) = %d\n", atoi(argv[1]), atoi(argv[2]), \
	 multfunc(atoi(argv[1]), atoi(argv[2])));
	printf("divfunc(%d, %d) = %d\n", atoi(argv[1]), atoi(argv[2]), \
	 divfunc(atoi(argv[1]), atoi(argv[2])));
    }
    else
    {
	printf("it needs 2 numbers\n");
    }
    return 0;
}
