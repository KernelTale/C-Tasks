#include <stdio.h>

#define debug_print(fmt, ...) do {if (DEBUG) fprintf(stderr, "%s:%d:%s(): "\
 fmt, __FILE__, __LINE__, __func__, __VA_ARGS__);} while (0)\

int main(void)
{
    int a = 25;
    debug_print("a = %d\n", a);
//    printf("LINE=%d FUNCTION=%s FILE=%s DATE=%s TIME=%s\n", __LINE__, __FUNCTION__, __FILE__, __DATE__, __TIME__);
    return 0;
}
