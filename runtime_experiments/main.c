#include <unistd.h>
#include <stdlib.h>

int a(void)
{
    int i = 0, g = 0;
    while(i++<100000)
    {
	g++;
    }
    return g;
}

int b(void)
{
    int n = 0, m = 0;
    while(n++<25000)
    {
	m++;
    }
    return m;
}

int main(int argc, char** argv)
{
    int h = 0, j = 0;
    h = a();
    j = b();
    return 0;
}
